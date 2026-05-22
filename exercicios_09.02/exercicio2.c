#include <stdio.h>
int main()
{
    // Escreva um programa que leia dois números inteiros A e B do teclado e imprima as mensagens “nulo”, “sinal negativo” ou
    // “sinal positivo”, conforme o resultado da multiplicação de A por B
    int num1, num2, resultado;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &num2);
    resultado = num1 * num2;
    if (resultado > 0)
    {
        printf("Sinal positivo");
    }
    else if (resultado < 0)
    {
        printf("Sinal negativo");
    }
    else
    {
        printf("Nulo");
    }

    return 0;
}