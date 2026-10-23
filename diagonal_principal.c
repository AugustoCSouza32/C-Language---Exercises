#include <stdio.h>

int main(){
    int matrix[4][4];
    int lin, col;
    
    // Armazena 0 na diagonal principal ou o valor digitado nas outras casas.
    for(lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            if(lin == col){
                matrix[lin][col] = 0;
            }else{
                printf("\nElemento [%d][%d] = ", lin, col, matrix[lin][col]);
                scanf(" %d", &matrix[lin][col]);
            }
        }
    }
    // Imprime os valores da diagonal principal.
    for (lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            if(lin == col){
                printf("\nDiagonal[%d][%d] = %d",lin,col,matrix[lin][col]);
            }
        }
    }
    printf("\n");
    //Imprime matriz:
    for (lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            printf("%d,",matrix[lin][col]);
        }
        printf("\n");
    }
    return 0;
}