// Escreva um programa que construa uma matriz de 5 linhas por 5 colunas de números reais e
// coloque o conteúdo de sua diagonal principal dentro de um vetor e o imprima
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    float matriz[5][5];
    float diagonal[5];

    // Preenche a matriz
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("Numeros adicionados na posicao[%d][%d]: %.1f\n", i, j, matriz[i][j]);
        }
    }
    // Extrai a diagonal principal para o vetor
    for (int i = 0; i < 5; i++)
    {
        diagonal[i] = matriz[i][i];
    }
    // Imprime o vetor da diagonal principal
    printf("\nVetor da diagonal principal:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f ", diagonal[i]);
    }
    printf("\n");

    return 0;
}