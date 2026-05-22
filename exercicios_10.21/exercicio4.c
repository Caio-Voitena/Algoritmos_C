//Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha a soma dos valores de cada
//uma das linhas da matriz. Crie um vetor com 4 posições que contenha a multiplicação dos valores de cada uma das
//colunas da matriz. Ao final do processamento, imprima esses vetores
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[3][4];
    int l, c;
    int soma_linha[3] = {0, 0, 0}, mult_coluna[4];

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            matriz[l][c] = rand() % 9 + 1;
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    for (l = 0; l < 3; l++)
    { //soma_linha[l] = 0; outra maneira de inicializar com valor 0, é a msm coisa q o soma_linha[3] = {0, 0, 0}
      //inicia uma nova linha e zera o vetor:  
        for (c = 0; c < 4; c++)
        { //percorre a linha l da matriz:
            soma_linha[l] = soma_linha[l] + matriz[l][c];
        }
    }
    printf("Valores do vetor soma linha: \n");
    for (l = 0; l < 3; l++)
    {
        printf("Indice %d: %d\n", l, soma_linha[l]);
    }
    for (c = 0; c < 4; c++)
    {   //a cada nova coluna, inicializa o vetor como 1:
        mult_coluna[c] = 1;
        for (l = 0; l < 3; l++)
        {  // para cada valor da coluna, acumula a multiplicação:
            mult_coluna[c] = mult_coluna[c] * matriz[l][c];
        }
    }
    printf("Valores do vetor multiplica coluna: \n");
    for (c = 0; c < 4; c++)
    {
        printf("Indice %d: %d\n", c, mult_coluna[c]);
    }
    
    return 0;
}