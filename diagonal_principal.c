#include <stdio.h>

int main(){
    int matrix[4][4];
    int lin, col;
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

    for (lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            if(lin == col){
                printf("\nDiagonal[%d][%d] = %d",lin,col,matrix[lin][col]);
            }
        }
    }
    return 0;
}