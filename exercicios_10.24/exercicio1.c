// Leia do teclado valores para um vetor de 10 elementos inteiros, pares e positivos.
// Crie um segundo vetor da seguinte forma: os elementos de índices pares receberão os respectivos
// elementos divididos por 2; os elementos de índices ímpares receberão os respectivos elementos multiplicados
// por 3. Imprima os dois vetores.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int vetor1[10], vetor2[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero par e positivo:\n");
        scanf("%d", &vetor1[i]);
        if (vetor1[i] <= 0 || vetor1[i] % 2 != 0)
        {
            printf("Valor invalido! Digite um numero par e positivo.\n");
            exit(1);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            vetor2[i] = vetor1[i] / 2;
        }
        else
        {
            vetor2[i] = vetor1[i] * 3;
        }
    }
    printf("Vetor 1:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor1[i]);
    }
    printf("\nVetor 2:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor2[i]);
    }
    return 0;
}