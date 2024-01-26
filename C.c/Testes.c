#include <stdio.h>
#include <string.h>

#define MAX_PASSAGENS 10

int pesquisarPassagens(char origem[], char destino[], char origens[][50], char destinos[][50], float precos[], int* numResultados) 
{
    int i, count = 0;
    for (i = 0; i < MAX_PASSAGENS; i++) {
        if (strcmp(origens[i], origem) == 0 && strcmp(destinos[i], destino) == 0) {
            *numResultados += 1;
            count++;
        }
    }

    return count;
}

int main() 
{
    char origens[MAX_PASSAGENS][50] = {"Cidade A", "Cidade B", "Cidade A", "Cidade C", "Cidade B"};
    char destinos[MAX_PASSAGENS][50] = {"Cidade B", "Cidade C", "Cidade C", "Cidade A", "Cidade A"};
    float precos[MAX_PASSAGENS] = {150.0, 200.0, 180.0, 220.0, 160.0};
    
    char origem[50];
    char destino[50];

    printf("Digite a cidade de origem: ");
    scanf("%s", origem);

    printf("Digite a cidade de destino: ");
    scanf("%s", destino);

    int numResultados = 0;
    int numEncontrados = pesquisarPassagens(origem, destino, origens, destinos, precos, &numResultados);

    if (numEncontrados > 0) {
        printf("Resultados da pesquisa:\n");
        for (int i = 0; i < numResultados; i++) {
            printf("Passagem %d: Origem: %s, Destino: %s, Preço: %.2f\n",
                   i + 1, origens[i], destinos[i], precos[i]);
        }
    } else {
        printf("Nenhuma passagem encontrada para a rota especificada.\n");
    }

    return 0;
}
