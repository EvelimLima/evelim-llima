#include <stdio.h>

int main(void)
{
    int num = 1, cont = 0;
//multiplos de tres, recebe varios numeros e para quando achar 5 numeros mult de 3...
    while(cont < 5)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num % 3 == 0)
        {
            printf("\n%d eh multiplo de 3\n", num);
            cont = cont + 1;
        }

        num = num + 1;
    }

    return 0;
}