#include <stdio.h>

int main(){
    //Usamos para aguentar númerios maiores (64 bits sem sinal)
    unsigned long long int numbers[93];

    //Casos base direto no vetor
    numbers[0] = 0;
    numbers[1] = 1;

    printf("Fibonacci 0: %llu\n", numbers[0]);
    printf("Fibonacci 1: %llu\n", numbers[1]);

    //O laço calcula os próximos termos usando os dois anteriores já guardadados
    for(int i = 2; i < 93; i++){
        numbers[i] = numbers[i - 1] + numbers[i -2];

        //%llu é o especificador para imprimir "unsigned long long int"
        printf("Fibonacci %d: %llu\n",i, numbers[i]);
    }
    return 0;
}