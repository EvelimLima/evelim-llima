#include <stdio.h>
//funcao media
float mediaNotas(float *nota, int quatidade)
{
    float soma = 0;
    float media = 0;
    for(int i = 0; i < quatidade; i++){
        soma = soma + nota[i];
        media = soma / quatidade;
    }

    return media;

}

int main(void){

    int tamanho = 4;
    float notas[tamanho];
    float media = 0;

    printf("Informe notas:\n");

    for(int i = 0; i < tamanho; i++){
        scanf("%f", &notas[i]);
    }

/*
    for(int i = 0; i < tamanho; i++){
        printf("%.2f ", notas[i]);
    }
*/

    media = mediaNotas(notas, tamanho);

    printf("Media eh: %.2f", media);
    
    return 0;
}