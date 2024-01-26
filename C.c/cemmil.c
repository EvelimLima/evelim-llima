#include <stdio.h>

int main(void)
{
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    for(int i = n; i <= 100; i = i+10){
        printf(" %d ", i);
    }

    return 0;
}