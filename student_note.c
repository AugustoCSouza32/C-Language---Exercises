#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float notas, media, soma = 0;
    int qtde_alunos, i;
    printf("Digite a quntidade de alunos: ");
    scanf("%d", &qtde_alunos);

    for (i = 0; i < qtde_alunos; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas);
            soma += notas;
        }
        media = soma / 3;
        printf("A média do aluno %d é: %.2f\n", i + 1, media);
        if (media >= 7){
            printf("O aluno %d foi aprovado!\n", i + 1);
        } else {
            printf("O aluno %d foi reprovado!\n", i + 1);
        }
        soma = 0; // Reset the sum for the next student
    }
}