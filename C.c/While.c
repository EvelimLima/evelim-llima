#include <stdio.h>

int main(void)
{
    int num, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    while(num != 0)
    {
        soma = soma + num;

        printf("Informe um valor: ");
        scanf("%d", &num);
    }
    printf("Soma: %d", soma);

    return 0;
}