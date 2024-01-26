#include <stdio.h>

int main(void){
    /*
    int n, quadrado = 0;
    printf("Informe um numero: ");
    scanf("%d", &n);

    quadrado = n * n;

    printf("O quadrado do numero eh: %d", quadrado);
*/

    int n, soma = 0, quadrado =0 ;

    printf("Informe 3 numeros:\n");
    for(int i = 1; i <= 3; i++){
        scanf("%d", &n);
        quadrado = n * n;
        soma = soma + quadrado;
    }

    printf("%d", soma);

    return 0;
}