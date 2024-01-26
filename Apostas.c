#include <stdio.h>

int main(void){
    float premio;
    float apostas1, apostas2, apostas3, totalApostas;
    float porcento1, porcento2, porcento3, totalPorcentagem;
    float premio1, premio2, premio3, totalPremio;

    printf("Informe as apostas dos tres amigos: \n");
    scanf("%f%f%f", &apostas1, &apostas2, &apostas3);

    totalApostas = apostas1 + apostas2 + apostas3;

    printf("Apostas Total: %0.2f\n", totalApostas);

     porcento1 = (apostas1/totalApostas);
     porcento2 = (apostas2/totalApostas);
     porcento3 = (apostas3/totalApostas);

     totalPorcentagem = porcento1 + porcento2 + porcento3;
     printf("Porcentagem total: %0.2f", totalPorcentagem);

    printf("\nInforme o premio: \n");
    scanf("%f", &premio);

    premio1 = porcento1 * premio;
    premio2 = porcento2 * premio;
    premio3 = porcento3 * premio;

    printf("A aposta: %0.2f  a porcentagem %0.2f  e o premio %0.2f  \n", apostas1, porcento1, premio1);
    printf("A aposta: %0.2f  a porcentagem %0.2f  e o premio %0.2f  \n", apostas2, porcento2, premio2);
    printf("A aposta: %0.2f  a porcentagem %0.2f  e o premio %0.2f  \n", apostas3, porcento3, premio3);

    return 0;

}

/*Parte do prêmio do Amigo A = (Aposta do Amigo A / Soma total das apostas) * Prêmio total 
Parte do prêmio do Amigo B = (Aposta do Amigo B / Soma total das apostas) * Prêmio total 
Parte do prêmio do Amigo C = (Aposta do Amigo C / Soma total das apostas) * Prêmio total
*/