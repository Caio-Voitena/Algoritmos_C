#include <stdio.h>
int main()
{
    float salario, salario_final, aumento, valor_aumento;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (salario < 0.0)
    {
        printf("O valor do salario nao pode ser negaivo");
    }
    else if ((salario >= 0.0) && (salario < 1400.00))
    {
        aumento = 0.15;
    }
    else if ((salario >= 1400.01) && (salario <= 2000.00))
    {
        aumento = 0.12;
    }
    else if ((salario >= 2000.01) && (salario <= 3000.00))
    {
        aumento = 0.10;
    }
    else if ((salario >= 3000.01) && (salario <= 3800.00))
    {
        aumento = 0.07;
    }
    else if ((salario >= 3800.01) && (salario <= 5000.00))
    {
        aumento = 0.04;
    }
    else if (salario > 5000.00)
    {
        aumento = 0.0;
    }

    valor_aumento = aumento * salario;
    salario_final = valor_aumento + salario;
    printf("Com um aumento de %.2f, o salario virou %.2f", valor_aumento, salario_final);

    return 0;
}
