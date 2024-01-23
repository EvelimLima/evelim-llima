#include <stdio.h>

int main(void){

    float n, soma = 0, media = 0;

    printf("Informe 3 notas:\n");

    for(int i = 1; i <= 4; i++){
        scanf("%f", &n);
        soma = soma + n;
        media = soma / 4;
    }
    printf("Media eh: %f", media);
    
    return 0;
}