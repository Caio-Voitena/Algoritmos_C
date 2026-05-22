// Defina uma matriz de 4 linhas por 4 colunas e imprima a multiplicação de sua diagonal principal.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[4][4];
    int l, c, mult = 0;

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            matriz[l][c] = rand() % 10;
            printf("%d ", matriz[l][c]);

            if (l = c)
            {
                mult = mult * matriz[l][c];
            }
        }
        printf("\n");
    }
    printf("A multiplicacao da ultima coluna eh: %d \n", mult);
    return 0;
}