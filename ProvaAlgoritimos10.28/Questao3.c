// Em um programa de televisão chamado SOLETRANELSON, 6
// competidores se enfrentam a fim de conquistar os grandes prêmios: uma escultura de gelo em
// formato de capivara e um dogão com duas vinas. Sabendo que existem cinco rodadas, a cada
// rodada os competidores tentam soletrar 10 palavras e o número de acertos por rodada é computado.
// Ao final das 5 rodadas, a melhor e a pior rodada de cada competidor são eliminadas e a pontuação
// final do competidor é a soma das três rodadas restantes.

// Você deve escrever um programa que utilize uma matriz de 6 linhas (uma por competidor) e 5
// colunas (uma por rodada). Essa matriz deve ser preenchida com valores entre 0 e 10,
// correspondentes ao número de acertos do competidor em cada rodada. O programa deve calcular a
// pontuação final de cada competidor de modo a desconsiderar a melhor e a pior rodada e fazer a
// soma das pontuações das três rodadas restantes. Por fim, exiba a pontuação final para todos os
// competidores.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int matriz[6][5];
    int l, c, pontuacao[6] = {0, 0, 0, 0, 0, 0};

    for (l = 0; l < 6; l++)
    {
        int soma = 0;

        printf("Competidor %d:\n", l + 1);
        for (c = 0; c < 5; c++)
        {
            printf("Rodada %d:\n", c + 1);
            scanf("%d", &matriz[l][c]);
            
        }
        printf("\n");

        soma += matriz[l][c];
        pontuacao[l] = soma;
    }
    printf("Pontuacao final dos competidores: \n");
    for (l = 0; l < 6; l++)
    {
        printf("Competidor %d: %d pontos\n", l + 1, pontuacao[l]);
    }

    return 0;
}
