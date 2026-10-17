#include <stdio.h>

#define MIN_IDADE 9 //Define a idade mínima, 
                    //neste caso não é criado uma posição de memória para a constante, apenas substitui o valor no código fonte.
int main(void)
{
    int idade;
    float altura, peso;
    double imc;
    char nome[50];


    // Constantes:
    const float PI = 3.14159;
    const int MAX_ALUNOS = 30;
    const char LETRA = 'A';
    const char NOME_CURSO[] = "Ciencia da Computacao";

    idade = MIN_IDADE + 1; //A constante MIN_IDADE é substituída pelo valor 9, então idade = 9 + 1 = 10
    altura = 1.75; // Exemplo de valor para altura
    peso = 70.0; // Exemplo de valor para peso
    imc = peso / (altura * altura);
    
    
    printf("Idade: %d\n", idade);
    printf("IMC: %.2f\n", imc);

    return 0;
}