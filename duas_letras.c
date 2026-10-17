#include <stdio.h>

int main(){
    char letra1, letra2;

    printf("Entre com duas letras: \n");
    scanf(" %c %c", &letra1, &letra2);

    printf("As letras digitadas foram: %c e %c\n", letra1, letra2);

    return 0;
}