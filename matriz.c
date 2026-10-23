#include <stdio.h>

int main(){
    // [linhas] [colunas]
    int matrix_dec [3][3] = {
                                {1,2,3},
                                {1,2,3},
                                {1,2,3}
                            };

    for (int lin = 0; lin < 3; lin++){
        for(int col = 0; col < 3; col++){
            printf("%d",matrix_dec[lin][col]);
        }
        printf("\n");
    }

}