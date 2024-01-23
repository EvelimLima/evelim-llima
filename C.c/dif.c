#include <stdio.h>
#include <stdlib.h> // Para a função abs()


int main() {

    int anterior, atual, dif =0;

    printf("Digite um numero: ");
    scanf ("%d", &atual);
    anterior = atual;

    // Leitura dos dez números inteiros
    for (int i = anterior; i < 10; i++) {
        scanf("%d", &atual);

        dif = abs(atual - anterior);
          printf(": %d\n", dif);

         anterior = atual;

        }
        

/*
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);
for(int i=0;i<num;++i){
	if (i%2==1)
	printf("%d\n",i);
}
*/

     return 0;
}
