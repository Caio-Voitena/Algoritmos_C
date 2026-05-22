#include <stdio.h>
int main()
{
    // Em uma certa papelaria, até 100 folhas, a cópia do xerox custa R$ 0,25 e, acima de 100 folhas, cada cópia adicional
    // custa R$ 0,20. Escreva um algoritmo que dado o número total de cópias, informe o valor a ser pago

    int qtd_folhas, valor100f, valor_adc, folha_adc;
    float valor_final;
    printf("Digite o valor de folhas desejado: ");
    scanf("%d", &qtd_folhas);
    valor100f = 25;

    if (qtd_folhas <= 100)
    {
        valor_final = qtd_folhas * 0.25;
        printf("O valor final e de: %.2f reais", valor_final);
    }
    else if (qtd_folhas > 100)
    {
        folha_adc = qtd_folhas - 100;
        valor_adc = folha_adc * 0.20;
        valor_final = valor100f + valor_adc;
        printf("O valor final e de: %.2f reais", valor_final);
    }

    return 0;
}