#include <stdio.h>

void ordenaVetor(int *vetor, int tamanho)
{
    int ordena = 0;

    for(int i = 0; i < tamanho; i++){
        for(int j = i +1 ; j < tamanho; j++){
            if(vetor[i] > vetor[j]){
                   ordena = vetor[i];
                    vetor[i]=vetor[j];
                    vetor[j]=ordena;
            }
        }
    }
}

int main(void)
{
    int vet[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

   // for(int i = 0; i < 5; i++){
   //     printf("%d", vet[i]);
   // }

   ordenaVetor(vet, 5);

   for(int i = 0; i < 5; i++){
       printf("%d", vet[i]);
   }

    return 0;
}