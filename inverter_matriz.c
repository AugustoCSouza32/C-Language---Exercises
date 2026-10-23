//Faça um algoritmo que leia uma matriz 4x4 de números inteiros.
//Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1,
//e as colunas são as linhas da matriz 1.

#include <stdio.h>

int main(){
    int matriz_u[4][4];
    int matriz_d[4][4];
    int lin, col;
    int i = 1;

    //Armazena o valor na matriz.
    for(lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            matriz_u[lin][col] = i++;
        }
    }

    //Inverte a posição dos valores na matriz linhas para colunas.
    for(lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            matriz_d[lin][col] = matriz_u[col][lin];
        }
    }

    //imprime matriz;
    for(lin = 0; lin < 4; lin++){
        for(col = 0; col < 4; col++){
            printf("%d,",matriz_d[lin][col]);
        }
        printf("\n");
    }

    return 0;
}