#include <stdio.h>

int main(void)
{
    int vet[10];
    int pares =0;
    int zero = 0;

    for(int i = 1; i <= 10; i++)
        {
         scanf("%d", &vet[i]);
         
        if(vet[i] % 2 == 0)
        {
            pares = pares + 1;
        }
            
        }
        printf("Quantidade de pares: %d\n", pares);

        for(int i = 1; i <= 10; i++)
        {
            if(vet[i] < 0)
            {
                vet[i] = 0;
                zero = zero + 1;
            }
        }
        printf("QTD de vet negativos q receberam zero: %d", zero);

    return 0;
}