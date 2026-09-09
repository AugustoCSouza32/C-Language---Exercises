#include <stdio.h>

<<<<<<< HEAD
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
=======
int main (){

    int x; //numero inteiro
    char n; //caracter
    char s[100]; //String com 100 caracteres
    float b; //numero real com precisão simples
    double c; //numero real com precisão dupla

    int a; // Na linguagem C, o valor falso é representado pelo número 0, enquanto o valor verdadeiro é representado por qualquer número diferente de 0.
>>>>>>> b675a0ebc37122f669c3de14fcea96a7514e23d5

    return 0;
}