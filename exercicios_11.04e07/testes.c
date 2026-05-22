#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// prototipos de funçoes
double leDouble();
void quadrado(double num);

int main()
{
    double num;
    // chamada de função com retorno
    num = leDouble();
    // chamada de função com retorno vazio (procedimento)
    quadrado(num);
    return 0;
}
double leDouble()
{
    double valor;
    do
    {
        printf("Digite um valor real positivo: ");
        scanf("%lf", &valor);
    } while (valor < 0.0);
    return valor;
}
void quadrado(double num)
{
    double quadr;
    quadr = pow(num, 2.0);
    printf("O quadrado eh: %.2lf \n", quadr);
}
