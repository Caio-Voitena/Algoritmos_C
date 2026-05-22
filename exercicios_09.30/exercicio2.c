#include <stdio.h>
#include <stdlib.h>
// Implemente um programa que exiba os conteúdos dos itens de índice par de um vetor.
int main()
{
    float vetor[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Preenchendo vetor %d: ", i);
        scanf("%f", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("Vetor indice %d: %.1f \n", i, vetor[i]);
        }
    }

    return 0;
}