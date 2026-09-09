#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //Os tipos de operadores são: aritméticos(+, -, *, /, %), 
    //relacionais(>, <, >=, <=, ==, !=), 
    // lógicos(&&, ||, !), 
    // de atribuição(=, +=, -=, *=, /=, %=), 
    // unários(++ e --) 
    // e ternário(?:).
    // Conversão - permitem armazenar valores de um tipo em outro.
    // Atenção! Em C, não existe o tipo booleano, mas podemos simular com 0 e 1. Qualquer outro valor diferente de 0 é verdadeiro.

    //Precedência de operadores
    //A ordem de precedência dos operadores em C é a seguinte:
    //1. () - Parênteses
    //2. ++, -- - Incremento e decremento
    //3. *, /, % - Multiplicação, divisão e módulo
    //4. +, - - Adição e subtração
    //5. <, <=, >, >= - Operadores relacionais
    //6. ==, != - Operadores de igualdade e desigualdade
    //7. && - Operador lógico E
    //8. || - Operador lógico OU
    //9. ? - Operador ternário


    int a = 5, b = 10, c = 15, result;

    result = a + b * c; // Multiplicação tem precedência sobre adição
    printf("Resultado de a + b * c: %d\n", result);

    result = (a + b) * c; // Parênteses alteram a precedência
    printf("Resultado de (a + b) * c: %d\n", result);

    result = a > b && b < c; // Operadores relacionais e lógicos
    printf("Resultado de a > b && b < c: %d\n", result);

    result = a == 5 ? b : c; // Operador ternário
    printf("Resultado de a == 5 ? b : c: %d\n", result);

    result = a += 2; // Operador de atribuição
    printf("Resultado de a += 2: %d\n", result);
    
return 0;
}