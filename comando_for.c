#include <stdio.h>
#include <windows.h>

float media(float soma){
    return soma / 3;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float soma = 0;
    int i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &i);

    for (int j = 0; j < i; j++){
        for (int k = 0; k < 3; k++){
            float nota;
            printf("Digite a nota %d do aluno %d: ", k + 1, j + 1);
            scanf("%f", &nota);
            soma += nota;
        }
        if (media(soma) >= 7.0){
            printf("Aluno %d aprovado com média %.2f\n", j + 1, media(soma));
        } else{
            printf("Aluno %d reprovado com média %.2f\n", j + 1, media(soma));
        }
        soma = 0;
    }
}