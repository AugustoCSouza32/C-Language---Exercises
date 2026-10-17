#include "raylib.h"
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
    // Inicialização da janela
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Jogo do Balão");

    // Variáveis do Balão
    Vector2 posBalao = { (float)screenWidth / 2, (float)screenHeight / 2 };
    float raioAtual = 20.0f;
    const float raioMinimo = 20.0f;
    const float raioMaximo = 150.0f; 
    float taxaCrescimento = 15.0f; // Pixels que o balão cresce por segundo
    float taxaEsvaziamento = 25.0f; // O quanto ele murcha ao pegar o quadrado
    float velocidadeBalao = 350.0f; // Velocidade de movimento (pixels por segundo)

    // Variáveis do Quadrado (Alvo)
    Rectangle quadrado = { 0, 0, 25, 25 };
    quadrado.x = GetRandomValue(0, screenWidth - (int)quadrado.width);
    quadrado.y = GetRandomValue(0, screenHeight - (int)quadrado.height);
    
    float tempoQuadrado = 0.0f;
    const float tempoLimite = 3.0f; // O quadrado muda de lugar a cada 3 segundos

    bool gameOver = false;

    // Configura o jogo para rodar a 60 FPS
    SetTargetFPS(60);

    // Loop principal do jogo
    while (!WindowShouldClose()) {
        float dt = GetFrameTime(); // Tempo passado desde o último frame (delta time)

        if (!gameOver) {
            // 1. Controles de Movimento
            if (IsKeyDown(KEY_RIGHT)) posBalao.x += velocidadeBalao * dt;
            if (IsKeyDown(KEY_LEFT)) posBalao.x -= velocidadeBalao * dt;
            if (IsKeyDown(KEY_DOWN)) posBalao.y += velocidadeBalao * dt;
            if (IsKeyDown(KEY_UP)) posBalao.y -= velocidadeBalao * dt;

            // 2. Limites da Janela (não deixa o balão sair da tela)
            if (posBalao.x - raioAtual < 0) posBalao.x = raioAtual;
            if (posBalao.x + raioAtual > screenWidth) posBalao.x = screenWidth - raioAtual;
            if (posBalao.y - raioAtual < 0) posBalao.y = raioAtual;
            if (posBalao.y + raioAtual > screenHeight) posBalao.y = screenHeight - raioAtual;

            // 3. Mecânica do Balão Enchendo
            raioAtual += taxaCrescimento * dt;
            if (raioAtual >= raioMaximo) {
                gameOver = true; // Explodiu!
            }

            // 4. Mecânica de Tempo do Quadrado
            tempoQuadrado += dt;
            if (tempoQuadrado >= tempoLimite) {
                // Se o tempo acabar, o quadrado foge para outro lugar
                quadrado.x = GetRandomValue(0, screenWidth - (int)quadrado.width);
                quadrado.y = GetRandomValue(0, screenHeight - (int)quadrado.height);
                tempoQuadrado = 0.0f;
            }

            // 5. Colisão (Pegou o quadrado)
            if (CheckCollisionCircleRec(posBalao, raioAtual, quadrado)) {
                // Murcha o balão
                raioAtual -= taxaEsvaziamento;
                if (raioAtual < raioMinimo) raioAtual = raioMinimo; // Não deixa sumir

                // Cria um novo quadrado em outro lugar
                quadrado.x = GetRandomValue(0, screenWidth - (int)quadrado.width);
                quadrado.y = GetRandomValue(0, screenHeight - (int)quadrado.height);
                tempoQuadrado = 0.0f; // Reseta o cronômetro do quadrado
            }
        } else {
            // Reiniciar o jogo
            if (IsKeyPressed(KEY_ENTER)) {
                gameOver = false;
                posBalao = (Vector2){ screenWidth / 2, screenHeight / 2 };
                raioAtual = raioMinimo;
                quadrado.x = GetRandomValue(0, screenWidth - (int)quadrado.width);
                quadrado.y = GetRandomValue(0, screenHeight - (int)quadrado.height);
                tempoQuadrado = 0.0f;
            }
        }

        // --- DESENHO NA TELA ---
        BeginDrawing();
        ClearBackground(BLACK);

        if (!gameOver) {
            // Desenha o quadrado (amarelo) e o balão (vermelho)
            DrawRectangleRec(quadrado, YELLOW);
            DrawCircleV(posBalao, raioAtual, RED);

            // Textos na tela
            DrawText("Colete os quadrados antes que sumam!", 10, 10, 20, LIGHTGRAY);
            
            // Mostra o quão perto o balão está de explodir (%)
            int porcentagem = (int)((raioAtual / raioMaximo) * 100);
            DrawText(TextFormat("Risco de Explosao: %i%%", porcentagem), 10, 35, 20, (porcentagem > 80) ? RED : WHITE);
            
            // Barra de tempo visual para o quadrado
            DrawRectangle(10, 65, 200 - (int)((tempoQuadrado/tempoLimite)*200), 10, GREEN);
        } else {
            DrawText("GAME OVER!", screenWidth/2 - MeasureText("GAME OVER!", 40)/2, screenHeight/2 - 40, 40, RED);
            DrawText("O balão estourou!", screenWidth/2 - MeasureText("O balão estourou!", 20)/2, screenHeight/2 + 10, 20, WHITE);
            DrawText("Pressione ENTER para jogar novamente", screenWidth/2 - MeasureText("Pressione ENTER para jogar novamente", 20)/2, screenHeight/2 + 50, 20, GRAY);
        }

        EndDrawing();
    }

    // Fecha a janela
    CloseWindow();
    return 0;
}
