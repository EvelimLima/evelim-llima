#include <stdio.h>
#include <stdlib.h> // Para a função abs()

int main() {
    int numeros[10];
    int anterior, atual, diferenca;

    // Leitura dos dez números inteiros
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &atual);

        if (i > 0) {
            diferenca = abs(atual - anterior);
            printf("%d ", diferenca);
        }

        anterior = atual;
    }

    return 0;
}
