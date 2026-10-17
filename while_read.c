#include <stdio.h>
#include <windows.h>
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    
    int maior = 0;
    int i = 0, j = 15;

    while(i < j){
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &i);

        if(i > maior){
            maior = i;
        }
        i += 1;
    }
    printf("O maior número digitado foi: %d\n", maior);
}