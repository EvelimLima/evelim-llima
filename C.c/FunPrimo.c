#include <stdio.h>

int Primo(int x)
{
    int divi = 0;

    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            divi = divi + 1;
        }
        
        if(divi == 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }

}

int main(void)
{

    for(int i = 1 ; i <= 10; i++)
    if(Primo(i) == 1)
    {
     printf("Eh primo: %d", i);
    }

    return 0;
}