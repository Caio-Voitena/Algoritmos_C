#include <stdio.h>
int main()
{
    // Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se são iguais.

    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    if (x == y)
    {
        printf("%d é o mesmo valor que %d", x, y);
    }
    else if (x > y)
    {
        printf("%d é maior que %d", x, y);
    }
    else
    {
        printf("%d é menor que %d", x, y);
    }
    return 0;
}