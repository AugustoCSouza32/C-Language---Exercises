// Em uma universidade, um aluno é considerado aprovado se a média
// das suas notas for AV1 e AV2 for maior ou igual a 7.0. Implemente
// o segmento de código que informará ao usuário (aluno) se ele está
// aprovado ou reprovado.

#include <stdio.h>

float media_notas(float av1, float av2){
    
    float media = (av1 + av2) / 2;

    return media;
}

int main(){

    float av1, av2, media;

    printf("Entre com as notas AV1 e AV2: ");
    scanf("%f %f", &av1, &av2);

    media = media_notas(av1, av2);

    if (media >= 7.0) {
        printf("Aluno aprovado com media: %.2f\n", media);

    }else{
        printf("Aluno reprovado com media: %.2f\n", media);
    }
}