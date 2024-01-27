#include <stdio.h>

int main(void)
{
    int vet[6]={0, 1, 2, 3, 4, 5};
    int soma;

    soma = vet[2] + vet[3] + vet[4]; 
    printf("Soma: %d \n", soma);

    vet[4] = 100;
    
    for(int i = 1; i <= 6; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}