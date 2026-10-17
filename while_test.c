#include <stdio.h>

int main(){

    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    while(n != 0){
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);
    }
}