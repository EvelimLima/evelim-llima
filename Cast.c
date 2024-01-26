#include <stdio.h>

int main(void)
{
    int n1, n2;
    float resp;

    scanf("%d %d", &n1, &n2);

    resp = n1 + n2;
    printf("Soma eh: %d\n", (int)resp);//cast de float para int

    resp = (float)n1 / (float)n2;//cast de int para float
    printf("Divisao eh: %.2f\n", resp);

    return 0;
}