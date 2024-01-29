#include <stdio.h>
//só um valor basta para precorrer a matriz
void imprimeMat(int matriz[][3], int tm)
{
    
    for(int i = 0; i < tm; i++){
            for(int j = 0; j < tm; j++){
                printf("linha %d coluna %d : %d \n", i, j, matriz[i][j]);
            }
        }
        
}



int main(void)
{
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    imprimeMat(mat, 3);

       return 0;
}