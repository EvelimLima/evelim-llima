#include <stdio.h>

int main(void)
{
    int vet[6], cont =0;
    int soma;
    int i;

    for( i =0; i < 6; i++){
        printf("Informe o valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < 6; i++){
     printf("posicao %d valor %d \n", i, vet[i]);
    }

    soma = vet[2] + vet[3] + vet[4]; 
    printf("\nSoma eh: %d\n", soma);
    printf("\n\n");
    vet[4] = 100;
    
   for(int i = 0; i < 6; i++){//ver troca 
       printf("indice %d valor %d\n", i, vet[i]);
   }
    return 0;
}