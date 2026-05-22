// Escreva um programa que deverá permitir que o usuário entre com os valores dos elementos de uma
// matriz quadrada de ordem 4 (4 linhas e 4 colunas) e possibilite ao usuário realizar as seguintes funcionalidades:
// a. Imprimir todos os elementos da matriz;
// b. Somar os quadrados de todos os elementos da primeira coluna;
// c. Somar todos os elementos da terceira linha;
// d. Somar os elementos da diagonal principal;
// e. Somar todos os elementos de índice par da segunda linha
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int matriz[4][4];
    int opcao;
    int soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    do
    {
        printf("\nEscolha uma funcionalidade:\n");
        printf("1. Imprimir todos os elementos da matriz\n");
        printf("2. Somar os quadrados de todos os elementos da primeira coluna\n");
        printf("3. Somar todos os elementos da terceira linha\n");
        printf("4. Somar os elementos da diagonal principal\n");
        printf("5. Somar todos os elementos de indice par da segunda linha\n");
        printf("6. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nMatriz 4x4:\n");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            soma = 0;
            for (int i = 0; i < 4; i++)
            {
                soma += matriz[i][0] * matriz[i][0];
            }
            printf("\nSoma dos quadrados dos elementos da primeira coluna: %d\n", soma);
            break;

        case 3:
            soma = 0;
            for (int j = 0; j < 4; j++)
            {
                soma += matriz[2][j];
            }
            printf("\nSoma dos elementos da terceira linha: %d\n", soma);
            break;

        case 4:
            soma = 0;
            for (int i = 0; i < 4; i++)
            {
                soma += matriz[i][i];
            }
            printf("\nSoma dos elementos da diagonal principal: %d\n", soma);
            break;

        case 5:
            soma = 0;
            for (int j = 0; j < 4; j += 2)
            {
                soma += matriz[1][j];
            }
            printf("\nSoma dos elementos de indice par da segunda linha: %d\n", soma);
            break;

        case 6:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}