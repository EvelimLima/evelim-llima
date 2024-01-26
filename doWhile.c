#include <stdio.h>

int main(void)
{
    int num, soma = 0;

    do{//processsa antes de verificar a condição de para
        printf("Informe um numero: ");
        scanf("%d", &num);

        soma = soma + num;
    }
    while(num != 0);

    printf("Soma: %d", soma);

    return 0;
}