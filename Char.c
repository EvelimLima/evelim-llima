#include <stdio.h>

int main(void)
{
    char opcao;
    printf("Informe uma opcao\n");
   // printf("a - Saldo da conta....\n");
    //printf("b - Gerar extrato....\n");
    //printf("c - Transferencias....\n");
    scanf("%c", &opcao);

/*
    if(opcao == 'a')
    {
        printf("seu saldo eh:...\n");
    }
    else if(opcao == 'b')
    {
        printf("Extrato...\n");
    }
    else if(opcao == 'c')
    {
        printf("Tranferir para...\n");
    }
*/
    for(int i = 97; i <= 122; i++){
        printf("%c\n", i);
    }

    return 0;
}