#include <stdio.h>
#include <string.h>

#define MAX_PASSAGENS 10

// Função para pesquisar passagens com base na origem e destino
int pesquisarPassagens(char origem[], char destino[], char origens[][50], char destinos[][50], float precos[], int numPassagens) 
{
    int i, count = 0;
    for (i = 0; i < numPassagens; i++) {
        if (strcmp(origens[i], origem) == 0 && strcmp(destinos[i], destino) == 0) {
            count++;
        }
    }

    return count;
}

// Função para exibir todas as passagens
void exibirPassagens(char origens[][50], char destinos[][50], float precos[], int numPassagens) {
    printf("Passagens disponiveis:\n");
    for (int i = 0; i < numPassagens; i++) {
        printf("Passagem %d: Origem: %s, Destino: %s, Preco: %.2f\n",
               i + 1, origens[i], destinos[i], precos[i]);
    }
}

int main() 
{
    // Vetores para armazenar dados de passagens
    char origens[MAX_PASSAGENS][50];
    char destinos[MAX_PASSAGENS][50];
    float precos[MAX_PASSAGENS];

    int numPassagens = 0;  // Número atual de passagens armazenadas
    char origem[50];  // Movido para o início da função
    char destino[50];  // Movido para o início da função

    int opcao;
    do {
        // Menu de opções
        printf("\nMenu:\n");
        printf("1. Adicionar passagem\n");
        printf("2. Pesquisar passagens\n");
        printf("3. Exibir todas as passagens\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Adicionar passagem
                if (numPassagens < MAX_PASSAGENS) {
                    printf("Digite a cidade de origem: ");
                    scanf("%s", origens[numPassagens]);

                    printf("Digite a cidade de destino: ");
                    scanf("%s", destinos[numPassagens]);

                    printf("Digite o preco: ");
                    scanf("%f", &precos[numPassagens]);

                    // Processamento opcional dos dados (por exemplo, validações)
                    // Aqui, poderíamos adicionar mais lógica de validação ou processamento se necessário

                    numPassagens++;  // Incrementa o número de passagens
                } else {
                    printf("Limite maximo de passagens atingido!\n");
                }
                break;
            case 2:
                // Pesquisar passagens
                printf("Digite a cidade de origem: ");
                scanf("%s", origem);

                printf("Digite a cidade de destino: ");
                scanf("%s", destino);

                int numEncontrados = pesquisarPassagens(origem, destino, origens, destinos, precos, numPassagens);

                if (numEncontrados > 0) {
                    printf("Passagens encontradas para a rota especificada: %d\n", numEncontrados);
                } else {
                    printf("Nenhuma passagem encontrada para a rota especificada.\n");
                }
                break;
            case 3:
                // Exibir todas as passagens
                if (numPassagens > 0) {
                    exibirPassagens(origens, destinos, precos, numPassagens);
                } else {
                    printf("Nenhuma passagem disponivel para exibir.\n");
                }
                break;
            case 0:
                // Sair do programa
                printf("Saindo...\n");
                break;
            default:
                // Opção inválida
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
