// Paulinho tem em suas mãos um
//  problema. A sua professora lhe pediu que construísse um programa para verificar, a partir de dois
//  valores A e B, se B corresponde aos últimos dígitos de A.
//  Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo
//  ter até 100 dígitos. Para cada caso de entrada imprima uma mensagem indicando se o segundo
//  valor encaixa no primeiro valor, conforme exemplo abaixo.
//  DICA: Trate os dados de entrada como strings e utilize a função strlen() para descobrir o
//  tamanho de cada valor de entrada.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char strA[100];
    char strB[100];
    int fim, inicio, encaixa = 1;

    printf("Digite uma string: ");
    fgets(strA, sizeof(strA), stdin);

    printf("Digite uma string: ");
    fgets(strB, sizeof(strB), stdin);

    fim = strlen(strA) - 1;
    if (strA[fim] == '\n')
    {
        strA[fim] = '\0';
        fim--;
    }
    fim = strlen(strB) - 1;
    if (strB[fim] == '\n')
    {
        strB[fim] = '\0';
        fim--;
    }
    inicio = 0;
    while (inicio < fim)
    {
        if (strA[fim] != strB[fim])
        {
            encaixa = 0;
            break;
            printf("encaixou");
        }
        inicio++;
        fim--;
    }
    if (encaixa)
    {
        printf("A string nao encaixa.\n");
    }
    else
    {
        printf("A string encaixa.\n");
    }

    return 0;
}