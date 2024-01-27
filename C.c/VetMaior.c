#include <stdio.h>

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
}

int main(void)
{
    int vet[10];
    int cont = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
            vet[cont] = i;
        cont = cont + 1;
    }
    int v = vetorM(vet, cont);

    printf("Maior valor eh: %d\n", v);

    for(int i = 0; i < 10; i++)
    {
        printf("%d", vet[i]);
    }
//erro
    return 0;
}