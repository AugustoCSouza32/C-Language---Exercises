#include <stdio.h>

int main(){
    char inicial;
    int  idade;
    printf("Entre com a inicial do nome: \n");
    scanf(" %c", &inicial);
    printf("Entre com a idade: ");
    scanf("%d", &idade);
    printf("A inicial do nome é: %c e a idade é: %d", inicial, idade);
    return 0;
}