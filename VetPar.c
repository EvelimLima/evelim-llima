#include <stdio.h>

int main(void)
{
    int vet[10];
    int nupares[10], contpares =0;
    int contzero = 0;

    for(int i = 1; i <= 10; i++)
        {
        printf("Informe um valor para %d: ", i);
         scanf("%d", &vet[i]);
         
        if(vet[i] % 2 == 0)
        {
            nupares[contpares] = vet[i];//vetor para armazenar os pares 
            contpares = contpares + 1;//contador de pares
        }
            
        }
        printf("Quantidade de pares neste vetor eh: %d Sao eles \n", contpares);//quantidade
        for (int i = 0; i < pares; i++)
        {
            printf(" %d ", nupares[i]);//os pares
        }
        

        for(int i = 1; i <= 10; i++)
        {
            if(vet[i] < 0)
            {
                nuzeros[contzero] = 0;
                contzero = contzero + 1;
            }
        }
        printf("\n\n");
        printf("QTD de vet negativos q receberam zero: %d\n", contzero);
     
    return 0;
}