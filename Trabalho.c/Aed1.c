#include <stdio.h>
#include <string.h>

#define MAX_PASSAGENS 10

// Função para pesquisar passagens com base na origem e destino
// Recebe arrays de origens, destinos, precos e atualiza numResultados
int pesquisarPassagens(char origem[], char destino[], char origens[][50], char destinos[][50], float precos[], int* numResultados) 
{
    int i, count = 0;

    // Percorre o banco de dados de passagens
    for (i = 0; i < MAX_PASSAGENS; i++) {
        // Verifica se a origem e o destino coincidem
        if (strcmp(origens[i], origem) == 0 && strcmp(destinos[i], destino) == 0) {
            *numResultados += 1;  // Incrementa o número de resultados
            count++;             // Incrementa o contador local
        }
    }

    return count;  // Retorna o número de passagens encontradas
}

int main() 
{
    // Inicializações do banco de dados de passagens
    char origens[MAX_PASSAGENS][50] = {"Cidade A", "Cidade B", "Cidade A", "Cidade C", "Cidade B"};
    char destinos[MAX_PASSAGENS][50] = {"Cidade B", "Cidade C", "Cidade C", "Cidade A", "Cidade A"};
    float precos[MAX_PASSAGENS] = {150.0, 200.0, 180.0, 220.0, 160.0};
    
    // Variáveis para entrada do usuário
    char origem[50];
    char destino[50];

    // Solicita ao usuário que digite a cidade de origem
    printf("Digite a cidade de origem: ");
    scanf("%s", origem);

    // Solicita ao usuário que digite a cidade de destino
    printf("Digite a cidade de destino: ");
    scanf("%s", destino);

    int numResultados = 0;  // Inicializa o número de resultados
    int numEncontrados = pesquisarPassagens(origem, destino, origens, destinos, precos, &numResultados);

    if (numEncontrados > 0) {
        // Se houver passagens encontradas, exibe os resultados
        printf("Resultados da pesquisa:\n");
        for (int i = 0; i < numResultados; i++) {
            printf("Passagem %d: Origem: %s, Destino: %s, Preço: %.2f\n",
                   i + 1, origens[i], destinos[i], precos[i]);
        }
    } else {
        // Caso contrário, informa ao usuário que não foram encontradas passagens
        printf("Nenhuma passagem encontrada para a rota especificada.\n");
    }

    return 0;
}