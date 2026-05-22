#include <stdio.h>
#include <stdlib.h>
int main()
//Construir um programa que apresente a soma dos cem primeiros números naturais (1+2+3+ ... +98+99+100).
{
    int soma = 0, cont = 1;
    while (cont <= 100)
    {
        soma = soma + cont;
        printf("Cont: %d Soma: %d \n", cont, soma);
        cont++;
    }
    printf("Finalizando com soma %d", soma);

    return 0;
}