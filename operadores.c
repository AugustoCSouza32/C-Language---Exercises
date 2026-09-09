#include <stdio.h>
#include <stdlib.h>

//operadores matemáticos e manipulação de variáveis
int main(void){

    //em c, não existe o tipo booleano, então usamos 0 para falso e 1 para verdadeiro
    int verdadeiro = 1;
    int falso = 0;

    //Precedência de operadores matemáticos
    int a = 1 + 2 * 3; //a = 1 + (2 * 3) = 1 + 6 = 7
    int b = (1 + 2) * 3; //b = (1 + 2) * 3 = 3 * 3 = 9
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int c = 1 + 2 % 3; //c = 1 + (2 % 3) = 1 + 2 = 3
    int d = (1 + 2) % 3; //d = (1 + 2) % 3 = 3 % 3 = 0
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    //Unários
    int e = 5;
    e = e++; //e = 5 + 1 = 6
    printf("e = %d\n", e);
    e = ++e; //e = 6 + 1 = 7
    printf("e = %d\n", e);

    int soma = 1 + 2;
    int subtracao = 5 - 3;
    int multiplicacao = 4 * 2;
    int divisao = 10 / 2; //divisão inteira, resultado = 5
    float divisao_float = 10.0 / 2.0; //divisão com ponto flutuante, resultado = 5.0
    int resto = 10 % 3; //resto da divisão inteira, resultado = 1
    int decremento = e--; //decremento, e = 7 - 1 = 6
    printf("soma = %d\n", soma);
    printf("subtracao = %d\n", subtracao);
    printf("multiplicacao = %d\n", multiplicacao);
    printf("divisao = %d\n", divisao);
    printf("divisao_float = %f\n", divisao_float);
    printf("resto = %d\n", resto);
    printf("decremento = %d\n", decremento);
    return 0;
}