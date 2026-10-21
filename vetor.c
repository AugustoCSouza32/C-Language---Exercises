#include <stdio.h>

double vet[10]; //Vetor GLOBAL de 10 posições, 
char caracter[50];

int main(){
    char nome[7] = {'A','u','g','u','s','t','o'}; //Inicializa o vetor com os dados em cada posição.

    for(int i = 0; i < 7; i++){
        printf("%c",nome[i]);
    }
    
    printf("\n");
    //Escrever nome ao contrario
    for(int i = 7; i >= 0; i--){
        printf("%c",nome[i]);
    }
}

