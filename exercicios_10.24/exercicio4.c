// Escreva um algoritmo que construa uma matriz de 10 linhas e 15 colunas contendo números inteiros.
// Em seguida escreva a soma dos elementos de cada linha e se a soma dos elementos é par ou ímpar.
// Por fim, escreva a soma dos elementos de cada coluna e se a soma dos elementos é par ou ímpar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[10][15];
    int somaLinha, somaColuna;

    // Preenche a matriz
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    // Soma os elementos de cada linha e verifica paridade
    printf("Soma dos elementos de cada linha:\n");
    for (int i = 0; i < 10; i++)
    {
        somaLinha = 0;
        for (int j = 0; j < 15; j++)
        {
            somaLinha += matriz[i][j];
        }
        printf("Linha %d: Soma = %d - %s\n", i + 1, somaLinha, (somaLinha % 2 == 0) ? "Par" : "Impar");
    }

    // Soma os elementos de cada coluna e verifica paridade
    printf("\nSoma dos elementos de cada coluna:\n");
    for (int j = 0; j < 15; j++)
    {
        somaColuna = 0;
        for (int i = 0; i < 10; i++)
        {
            somaColuna += matriz[i][j];
        }
        printf("Coluna %d: Soma = %d - %s\n", j + 1, somaColuna, (somaColuna % 2 == 0) ? "Par" : "Impar");
    }

    return 0;
}