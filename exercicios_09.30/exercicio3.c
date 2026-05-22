#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que apresente os dados de um vetor na ordem inversa em que eles foram inseridos.
int main()
{
    int vetor[10];

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Os números na ordem inversa são:\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}