#include <stdio.h>

int main(void)
{
    int n, menor, maior;

    printf("Informe um numero: ");
    scanf("%d", &n);
    menor = maior = n;

    for(int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &n);

        if(n > maior)
        {
            maior = n;
        }

        if(n < menor)
        {
            menor = n;
        }
    }
    printf("%d e %d", maior, menor);

    return 0;
}