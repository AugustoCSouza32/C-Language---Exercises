#include <stdio.h>

int main(){
    float dividendo, divisor, resultado;
    printf("Entre com o dividendo e o divisor: ");
    scanf("%f %f",&dividendo, &divisor);
    if(divisor == 0){
        printf("Erro: Divisor nao pode ser zero.");
    }
    else{
        resultado = dividendo / divisor;
        printf("O resultado da divisao eh: %f", resultado);
    }

    return 0;
}