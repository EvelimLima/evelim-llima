#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar uma passagem
typedef struct {
    int numero;
    char origem[50];
    char destino[50];
    float preco;
} Passagem;

// Função para simular a pesquisa no banco de dados de passagens
Passagem* pesquisarPassagens(char origem[], char destino[], int* numResultados) {
    // Simulando um banco de dados de passagens
    Passagem bancoDeDados[] = {
        {1, "Cidade A", "Cidade B", 150.0},
        {2, "Cidade B", "Cidade C", 200.0},
        {3, "Cidade A", "Cidade C", 180.0}
        // Adicione mais passagens conforme necessário
    };

    // Simulando a pesquisa no banco de dados
    Passagem* resultados = NULL;
    int i, count = 0;
    for (i = 0; i < sizeof(bancoDeDados) / sizeof(bancoDeDados[0]); i++) {
        if (strcmp(bancoDeDados[i].origem, origem) == 0 && strcmp(bancoDeDados[i].destino, destino) == 0) {
            count++;
            resultados = (Passagem*)realloc(resultados, count * sizeof(Passagem));
            resultados[count - 1] = bancoDeDados[i];
        }
    }

    *numResultados = count;
    return resultados;
}

// Função para simular o processamento de pagamento e emissão de passagem
void processarPagamento(Passagem passagem) {
    // Simulando o processamento de pagamento
    printf("Pagamento processado com sucesso! Passagem emitida.\n");
}

int main() {
    char origem[50];
    char destino[50];

    // Usuário acessa o front-end e faz uma pesquisa por passagens
    printf("Digite a cidade de origem: ");
    scanf("%s", origem);

    printf("Digite a cidade de destino: ");
    scanf("%s", destino);

    // Front-end envia a solicitação de pesquisa para o back-end
    int numResultados;
    Passagem* resultados = pesquisarPassagens(origem, destino, &numResultados);

    // Back-end retorna os resultados para o front-end
    if (numResultados > 0) {
        // Front-end exibe os resultados da pesquisa para o usuário
        printf("Resultados da pesquisa:\n");
        for (int i = 0; i < numResultados; i++) {
            printf("Passagem %d: Origem: %s, Destino: %s, Preço: %.2f\n",
                   resultados[i].numero, resultados[i].origem, resultados[i].destino, resultados[i].preco);
        }

        // Usuário seleciona uma passagem e faz o pagamento
        int escolha;
        printf("Escolha o número da passagem desejada: ");
        scanf("%d", &escolha);

        // Front-end envia a solicitação de pagamento para o back-end
        processarPagamento(resultados[escolha - 1]);

        // Back-end envia a passagem para o front-end
        // Front-end exibe a passagem para o usuário
        printf("Passagem emitida:\n");
        printf("Origem: %s, Destino: %s, Preço: %.2f\n", resultados[escolha - 1].origem,
               resultados[escolha - 1].destino, resultados[escolha - 1].preco);
    } else {
        printf("Nenhuma passagem encontrada para a rota especificada.\n");
    }

    // Liberar memória alocada dinamicamente
    free(resultados);

    return 0;
}
