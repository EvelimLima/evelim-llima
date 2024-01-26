#include <stdio.h>

int main(void)
{
    char nome[50];
    char letra[26];

    printf("nome?: \n");
    gets(nome);

    printf("seu nome eh: %s \n", nome);

    int cont = 0;
    for(int i = 97; i <= 122; i++){
        letra[cont] = i;
        cont = cont + 1;
    }

    for(int i = 0; i < 26; i++){
        printf("%d == %c \n", letra[i], letra[i]);
    }

    return 0;
}