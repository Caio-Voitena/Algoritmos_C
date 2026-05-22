// Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça à
// gerência algumas informações relativas aos salários dos funcionários dessa empresa. Os salários
// devem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:
// a. preencher a matriz de salários por leitura do teclado;
// b. imprimir os salários de todos os funcionários, identificando qual a loja em que trabalha;
// c. imprimir o total pago em salários por loja;
// d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;
// e. informar a média salarial da segunda loja.
#include <stdio.h>
#include <stdlib.h>
#define LOJAS 3
#define FUNCIONARIOS 6

int main()
{
    float salarios[LOJAS][FUNCIONARIOS];
    float total;
    int acima_2000 = 0;

    // a. Preencher a matriz de salários
    for (int i = 0; i < LOJAS; i++)
    {
        printf("Loja %d:\n", i + 1);
        total = 0; // Reseta o total para cada loja
        for (int j = 0; j < FUNCIONARIOS; j++)
        {
            printf("Salário do funcionário %d: ", j + 1);
            scanf("%f", &salarios[i][j]);
            total += salarios[i][j]; // Acumula o total
            if (i == 0 && salarios[i][j] > 2000)
            {
                acima_2000++; // Conta funcionários na primeira loja
            }
        }
        printf("Total de salários na loja %d: R$ %.2f\n", i + 1, total);
    }

    // b. Imprimir salários
    printf("\nSalários dos funcionários:\n");
    for (int i = 0; i < LOJAS; i++)
    {
        for (int j = 0; j < FUNCIONARIOS; j++)
        {
            printf("Loja %d, Funcionário %d: R$ %.2f\n", i + 1, j + 1, salarios[i][j]);
        }
    }

    // d. Informar quantos funcionários recebem acima de R$ 2.000,00 na primeira loja
    printf("\nFuncionários com salário acima de R$ 2.000,00 na primeira loja: %d\n", acima_2000);

    // e. Calcular a média salarial da segunda loja
    total = 0; // Reseta total para calcular a média
    for (int j = 0; j < FUNCIONARIOS; j++)
    {
        total += salarios[1][j];
    }
    printf("Média salarial da segunda loja: R$ %.2f\n", total / FUNCIONARIOS);

    return 0;
}