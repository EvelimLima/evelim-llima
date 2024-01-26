#include<stdio.h>
#include<stdlib.h>

int main(void){

    /*
    int n = 10;
    float n2 = 6.79;
    char letra = 'a'; //saída com c% para um só caracter
    char frase[10] = "Bom dia!";//saída com %s para mais de um carater
    double n3 = 1.23456;
*/
    //utilizando scanf
   // int valor1, valor2, soma, sub, mult, div, numero, resto, dia; //varoávies do mesmo tipo numa só linha

   // float nota1, nota2, media, freq;
/*
    printf("Hello Word!\n");
    printf("numero inteiro: %d\n", n);
    printf("numero real: %f\n", n2);
    printf("caracter: %c\n", letra);
    printf("frase: %s\n", frase);
    printf("tipo double: %f\n", n3);

     //a ordem importa!
    printf("todos os dados na sequencia informada: \n%d \n%f \n%c \n%s \n%f \n", n, n2, letra, frase, n3); 

    //utilizando scanf
     printf("Digite um numero inteiro: ");
     scanf("%d", &valor1);

     printf("Digite outro numero inteiro: ");
     scanf("%d", &valor2);

     //operadores aritméticos
     soma = valor1 + valor2;
     sub = valor1 - valor2;
     mult = valor1 * valor2;
     //utilizar float em div se quiser ver numer quebrado
     div = valor1 / valor2;

     printf("Valor da soma de %d + %d = %d\n", valor1, valor2, soma);
     printf("Valor da soma de %d - %d = %d\n", valor1, valor2, sub);
     printf("Valor da soma de %d * %d = %d\n", valor1, valor2, mult);
     printf("Valor da soma de %d / %d = %d\n", valor1, valor2, div);

     printf("digite um numero inteiro: ");
     scanf("%d", &numero);

     resto = numero % 2;

     printf("Resto da divisao: %d\n", resto);

     //estrutura de decisão
     if(resto == 0){
        printf("Numero par!\n");
     }
     else{
        printf("Numero eh impar\n");
     }

    printf("Digite a primeita nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/ 2;

    printf("Media = %.2f\n", media);

    //if aninhado
    if(media >= 6){
        printf("Aluno aprovado\n");
    }
    else if(media < 3){
        printf("Aluno reprovado\n");
    }
    else{
        printf("Aluno em recuperacao\n");
    }
    
    //switch compara com valores constantes
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia){
        case 1 :
         printf("Domingo\n");
         break;

        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terca\n");
            break;

        case 4:
            printf("Quarta\n");
            break;

        case 5:
            printf("Quinta\n");
            break;

        case 6:
            printf("Sexta\n");
            break;
        
        case 7:
            printf("Sabado\n");
            break;
        
    default:
    printf("Valor invalido\n");
        break;
    }
    
   //operador ternário: pode ser mais curto que usar if...else
   //em alguns casos
   printf("Digite um numero inteiro: ");
   scanf("%d", &numero);

   //condições a testar ? verdadeiro ou falso
   numero > 0 ? printf("Positivo\n") : printf("Negativo");
   

     //operadores lógicos
    printf("Digite a frequnecia do aluno: ");
    scanf("%f", &freq);

    printf("Digite a primeita nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/ 2;

    printf("Media = %.2f\n", media);

    //if aninhado
    if(media >= 6 && freq >= 75)//operador lógico &&
    {
        printf("Aluno aprovado\n");
    }
    else if(media < 3 || freq < 75){
        printf("Aluno reprovado\n");
    }
    else{
        printf("Aluno em recuperacao\n");
    }

    //estrutura de Repetição de while
    int cont = 0;

   // printf("Informe um valor: ");
    //scanf("%d", &cont);

    while(cont <= 5){
        printf(" %d", cont);
        cont++;
    }

   //estrutura de Repetição do...while, essa condição é testada no final, difente do while, onde o tete é feito no início
   int n;
   do{
    printf("digite um valor positivo\n");
    scanf("%d", &n);
   }
   while(n > 0);
   printf("Fim");

     */

    float v1[4];
    
    int i;
    for( i = 0; i < 4; i++){
        printf("\nInforme um valor para a posicao v1[%d]\n", i+1);
        scanf("%f", &v1[i]);
            printf("v1[%d] he %.1f", i, v1[i]);

    }
   
   return 0;
}