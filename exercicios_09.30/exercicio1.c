#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que leia do teclado valores para dois vetores de 4 posições de ponto flutuante,
// depois subtraia os dois vetores. Ao final da execução deverá ser impresso o resultado na tela.
int main()
{
    float vetorA[4], vetorB[4], subtracao[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Vetor A - Preenchendo indice %d: ", i);
        scanf("%f", &vetorA[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("Vetor B - Preenchendo indice %d: ", i);
        scanf("%f", &vetorB[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("Vetor A indice %d: %.1f \n", i, vetorA[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("Vetor B indice %d: %.1f \n", i, vetorB[i]);
    }
    for (i = 0; i < 4; i++)
    {
        subtracao[i] = vetorA[i] - vetorB[i];
        printf("Subtracao do indice %d: %.1f \n", i, subtracao[i]);
    }

    return 0;
}