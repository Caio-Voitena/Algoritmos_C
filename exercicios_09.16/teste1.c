#include <stdio.h>
int main()
{
    int i, fatorial = 1;
    for (i = 1; i <= 5; i++)
    {
        fatorial = fatorial * i;
        printf("i: %d fatorial parcial: %d\n", i, fatorial);
    }

    return 0;
}