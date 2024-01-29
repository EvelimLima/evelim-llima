#include <stdio.h>
//o * no vetor da função da acesso ao primeero endereço, daí é possível percorre o vetor todo
void ordenaVetor(int *vetor, int tamanho)
{
    int ordena = 0;

    for(int i = 0; i < tamanho; i++){
        for(int j = i + 1 ; j < tamanho; j++){ // i seria o 7, j seria 6...
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