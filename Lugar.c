#include <stdio.h>

#define NUM_ONIBUS 3
#define NUM_ASSENTOS 10

// Função para exibir a matriz de assentos
void exibirAssentos(int assentos[NUM_ONIBUS][NUM_ASSENTOS]) {
    printf("Assentos disponiveis:\n");
    for (int i = 0; i < NUM_ONIBUS; i++) {
        printf("Onibus %d: ", i + 1);
        for (int j = 0; j < NUM_ASSENTOS; j++) {
            printf("%d ", assentos[i][j]);
        }
        printf("\n");
    }
}

// Função para fazer uma reserva de assento
void fazerReserva(int assentos[NUM_ONIBUS][NUM_ASSENTOS], int onibus, int assento) {
    if (assentos[onibus][assento] == 0) {
        assentos[onibus][assento] = 1;
        printf("Reserva realizada com sucesso!\n");
    } else {
        printf("Assento ocupado. Escolha outro assento.\n");
    }
}

// Função para exibir as reservas de um ônibus
void exibirReservas(int assentos[NUM_ONIBUS][NUM_ASSENTOS], int onibus) {
    printf("Reservas no Onibus %d:\n", onibus + 1);
    for (int j = 0; j < NUM_ASSENTOS; j++) {
        if (assentos[onibus][j] == 1) {
            printf("Assento %d reservado\n", j + 1);
        }
    }
}

int main() {
    int assentos[NUM_ONIBUS][NUM_ASSENTOS] = {0}; // Inicializa todos os assentos como disponíveis

    int opcao;
    do {
        // Menu de opções
        printf("\n.........................Menu:...............................\n");
        printf("1. Exibir assentos disponiveis\n");
        printf("2. Fazer reserva de assento\n");
        printf("3. Exibir reservas de um onibus\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Exibir assentos disponíveis
                exibirAssentos(assentos);
                break;
            case 2:
                // Fazer reserva de assento
                {
                    int onibus, assento;
                    printf("Digite o numero do onibus (1 a %d): ", NUM_ONIBUS);
                    scanf("%d", &onibus);
                    if (onibus >= 1 && onibus <= NUM_ONIBUS) {
                        printf("Digite o numero do assento (1 a %d): ", NUM_ASSENTOS);
                        scanf("%d", &assento);
                        if (assento >= 1 && assento <= NUM_ASSENTOS) {
                            fazerReserva(assentos, onibus - 1, assento - 1);
                        } else {
                            printf("Assento invalido.\n");
                        }
                    } else {
                        printf("Onibus invalido.\n");
                    }
                }
                break;
            case 3:
                // Exibir reservas de um ônibus
                {
                    int onibus;
                    printf("Digite o numero do onibus (1 a %d): ", NUM_ONIBUS);
                    scanf("%d", &onibus);
                    if (onibus >= 1 && onibus <= NUM_ONIBUS) {
                        exibirReservas(assentos, onibus - 1);
                    } else {
                        printf("Onibus invalido.\n");
                    }
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
