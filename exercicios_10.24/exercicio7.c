// Escreva um programa que leia do teclado valores inteiros para uma matriz de 5 linhas por 5 colunas.
// Em seguida, leia do teclado um valor numérico X. Conte quantos valores múltiplos de X existem na matriz e mostre-os na tela
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int matriz[5][5];
    int X, contador = 0;

    // Leitura da matriz 5x5
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor para X: ");
    scanf("%d", &X);

    // Verifica multiplos de X e contagem
    printf("\nMultiplos de %d encontrados na matriz:\n", X);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] % X == 0)
            {
                printf("%d ", matriz[i][j]);
                contador++;
            }
        }
    }

    // Exibe a quantidade de multiplos de X
    printf("\n\nQuantidade de multiplos de %d: %d\n", X, contador);

    return 0;
}