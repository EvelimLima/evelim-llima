#include <stdio.h>

int main(void)
{
    char nome[50]; //49 caaracteres

    printf("Informe seu nome: ");
    gets(nome);//gets n e recomendado

    printf("Seu nome eh: %s", nome);
}