#include <stdio.h>
// variaveis globais
// int x, y;

// recebe dois ponteiros por parâmetro
void troca(int *x, int *y)
{
    int aux;
    printf("Na funcao - Antes da troca %d %d\n", *x, *y);
    aux = *x;
    *x = *y;
    *y = aux;
    printf("Na funcao - Depois da troca %d %d\n", *x, *y);
}

int main()
{
    int a = 2, b = 3;

    // printf("A: %d %p \n", a, &a);
    printf("Na main - Antes da troca %d %d\n", a, b);

    troca(&a, &b);

    printf("Na main - Depois da troca %d %d\n", a, b);

    return 0;
}