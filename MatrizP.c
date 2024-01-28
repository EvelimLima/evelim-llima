#include <stdio.h>
#include <stdlib.h>

/*
void imprimeMat(int matriz[][3], int tm)
{
    for(int i = 0; i < tm; i++){
        for(int j = 0; j < tm; j++){
            printf("%d", matriz[i][j]);
        }
    }
}
*/

void imprimeMatriz(int **mat)
{
    int linha, coluna;
    
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d", mat[linha][coluna]);
        }
    }
}


int main(void){

    int i, linha, coluna, mat[3][3];

    //vetor de pontiro pra ponteiro, ponteiro pra inteiro
    int **matriz = malloc(3 * sizeof(int*));//int* verificar o tamaho do ponteiro para um inteiro em byts, daí substitui no luhar int*

    for(i = 0; i < 3; i++)
    //mat2 recebe um endreço de momoria de outro vetor de tm 3
        matriz(i) = malloc(3 * sizeof(int));//int é tamanho do tipo q é inteiro


    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //imprimeMat(mat, 3);
        imprimeMatriz(matriz);


    return 0;

}