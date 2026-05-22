#include <stdio.h>
#include <stdlib.h>
// Construa um algoritmo que receba um número inteiro e verifique se o mesmo é primo.
int main()
{
    int num, i, divisores = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            divisores++;
        }
    }
    if (divisores > 2)
    {
        printf("O numero nao e primo!");
    }
    else
    {
        printf("O numero e primo");
    }

    return 0;
}