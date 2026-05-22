#include <stdio.h>
#include <stdlib.h>
// Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em progressão aritmética contendo 10 valores.
// ○ Por exemplo, com A = 1 e R = 3, tem-se “1 4 7 10 13 16 19 22 25 28
int main()
{
    int i, inicial, razao;
    printf("Valor inicial da PA: ");
    scanf("%d", &inicial);
    printf("Valor da razao da PA: ");
    scanf("%d", &razao);
    for (i = 1; i <= 10; i++)
    {
        printf("%d \n", inicial);
        inicial = inicial + razao;
    }

    return 0;
}