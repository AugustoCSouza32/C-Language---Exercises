#include <stdio.h>

int main(){
    int matrix[3][4];
    int cont_impar = 0;
    int cont_par = 0;
    for(int lin = 0; lin < 3; lin++){
        for (int col = 0; col < 4; col++){
            printf("\nElemento[%d][%d] = ",lin,col);
            scanf(" %d", &matrix[lin][col]);
        }
    }
    //Saída de dados
    for(int lin = 0; lin < 3; lin++){
            for(int col = 0; col < 4; col++){
                 if(matrix[lin][col] % 2 != 0){
                cont_impar++;
            }
            else{
                cont_par++;
            }
            }
        }
        printf("Pares: %d\n",cont_par);
        printf("Impares: %d\n",cont_impar);
    return 0;
}