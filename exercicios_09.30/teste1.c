#include <stdio.h>
#include <stdlib.h>
// maneiras diferentes de atribuir valores para matrizes
int main()
{
    // int qtd[10]; //capacidade/tamanho
    // qtd[0] = 7;
    // printf("%d", qtd[0]);
    //------------------------------------------------------
    // int qtd[10] = {4, 5, 6, 7, 1, 2, 3, 4, 5, 6};
    // int indice;
    // for (indice = 0; indice < 10; indice++)
    // {
    //     printf("indice %d: %d\n",indice, qtd[indice]);
    // }
    //------------------------------------------------------
    int qtd[10];
    int indice;
    for (indice = 0; indice < 10; indice++)
    {
        printf("Digite um valor para o indice %d: ", indice);
        scanf("%d", &qtd[indice]);
    }

    for (indice = 0; indice < 10; indice++)
    {
        printf("indice %d: %d\n", indice, qtd[indice]);
    }

    return 0;
}