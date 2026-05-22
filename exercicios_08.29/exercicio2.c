#include <stdio.h>
int main()
{ // Faça um programa que leia um número inteiro e imprima se é par ou ímpar, usando o comando switch
    int num, resto;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resto = num % 2;
    switch (resto)
    {
    case 0:
        printf("par");
        break;
    case 1:
        printf("impar");
        break;
    }
    return 0;
}