#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario, maior, soma = 0;
    int i;

    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &i);

    for (int j = 0; j < i; j++){
        printf("Digite o salário do funcionário %d: ", j + 1);
        scanf("%f", &salario);
        soma += salario;
        
        if(salario > maior){
            maior = salario;
        }
    }
    printf("A média salarial é: %.2f\n", soma / i);
    printf("O maior salário é: %.2f\n", maior);
    return 0;  

}