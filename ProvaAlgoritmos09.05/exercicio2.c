#include <stdio.h>
#include <stdlib.h>
int main()
{
    float kg1, kg2, valor_final, valor1, valor2;
    printf("Quantos kgs de morango deseja comprar: ");
    scanf("%f", &kg1);
    printf("Quantos kgs de maca deseja comprar: ");
    scanf("%f", &kg2);
    if ((kg1 <= 5) && (kg2 <= 5))
    {
        valor1 = kg1 * 13.50;
        valor2 = kg2 * 7.99;
        valor_final = valor1 + valor2;
    }
    else if ((kg1 > 5) && (kg2 > 5))
    {
        valor1 = kg1 * 10.75;
        valor2 = kg2 * 6.50;
        valor_final = valor1 + valor2;
    }
    else if ((kg1 > 5) && (kg2 <= 5))
    {
        valor1 = kg1 * 10.75;
        valor2 = kg2 * 7.99;
        valor_final = valor1 + valor2;
    }
    else if ((kg1 <= 5) && (kg2 > 5))
    {
        valor1 = kg1 * 13.50;
        valor2 = kg2 * 6.50;
        valor_final = valor1 + valor2;
    }
    else
    {
        printf("Quantidade invalida");
    }
    if ((kg1 + kg2 >= 10) || (valor_final >= 50.00))
    {
        valor_final = valor_final - (valor_final * 0.1);
    }

    printf("O valor final sera: %.2f", valor_final);

    return 0;
}