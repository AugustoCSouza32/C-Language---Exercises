#include <stdio.h>
#include <windows.h>


unsigned long long int fatorial(unsigned long long int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unsigned long long int numero;
    printf("Digite um numero: ");
    scanf("%llu", &numero);

    while (numero < 0){
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%llu", &numero);
    }
    printf("O fatorial de %llu é %llu\n", numero, fatorial(numero));
    return 0;
}