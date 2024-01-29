#include <stdio.h>
//função para receber vetores e procurar o maior
int vetorM(int vetor[], int qtd)
{
    int maior = 0;

    for(int i = 0; i < qtd; i++)
    {
        if(i == 0)
        {
            maior = vetor[i];
         }
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

int main(void)
{
    int tamanho = 10 ;
    int vet[tamanho];

    for(int i = 0; i < tamanho; i++){
       scanf("%d", &vet[i]);
    }
  int v = vetorM(vet, tamanho);

    for(int i = 0; i < tamanho; i++){
       printf(" %d ", vet[i]);
    }  

  printf("\nMaior valor eh: %d\n", v);

    return 0;
}