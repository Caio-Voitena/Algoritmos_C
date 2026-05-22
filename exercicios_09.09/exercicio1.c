#include <stdio.h>
#include <stdlib.h>
int main()
// Elaborar um programa que leia dez valores numéricos reais e apresente no final a soma e a média dos valores lidos.
{
    int num, cont = 0;
    float soma, media;
    while (cont <= 9)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        cont++;
    }
    media = soma / cont;
    printf("O valor da soma eh: %.f\nO valor da media eh: %.f", soma, media);

    return 0;
}