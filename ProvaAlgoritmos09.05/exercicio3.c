#include <stdio.h>
int main()
{
    float salario, valor_p;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor das parcelas: ");
    scanf("%f", &valor_p);
    if (valor_p <= salario * 0.3)
    {
        printf("Emprestimo aprovado");
    }
    else if (valor_p > salario * 0.3)
    {
        printf("Emprestimo recusado");
    }
    return 0;
}