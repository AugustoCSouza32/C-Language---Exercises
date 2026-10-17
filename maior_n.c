#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n, maior, i;

    maior = 0;

    for (i = 1; i <= 15; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);

        if (n > maior){
            maior = n;
        }
    }
    printf("O maior número digitado foi: %d\n", maior);
    return 0;
}