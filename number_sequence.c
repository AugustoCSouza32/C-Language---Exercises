#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int number;

    do{
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf(" %d", &number);

        if (number != 0 && number != 9){
            if (number % 2 == 0){
                printf("O sucessor do número %d é: %d\n", number, number + 1);
            } else {
                printf("O antecessor do número %d é: %d\n", number, number - 1);
            }
        }
        
    }while(number != 0 && number != 9);
}