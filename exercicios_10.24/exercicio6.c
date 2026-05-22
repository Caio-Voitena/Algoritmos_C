// Escreva um programa que gere uma matriz de inteiros de 4 linhas por 4 colunas e crie sua transposta
//(matriz transposta é toda a matriz onde são trocadas as linhas pelas colunas ou vice-versa)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[4][4];
    int transposta[4][4];

    // Preenche a matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("Numero adicionado na posicao[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
    // Calcula a transposta
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
    // Exibe a matriz transposta
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}