// Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabuada[11][11];

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            tabuada[i][j] = i * j;
        }
    }

    printf("Tabuada de 0 a 10:\n");
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            printf("%3d ", tabuada[i][j]);
        }
        printf("\n");
    }
    return 0;
}