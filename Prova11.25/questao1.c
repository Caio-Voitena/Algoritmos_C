#include <stdio.h>
#include <stdlib.h>
int calcula_meses_para_meta(float meta, float saldo, float econo);
void exibe_progresso();

int main()
{
    float meta, saldo_inicial, valor_economizado;
    int num_meses;

    printf("Digite a meta de economia: ");
    scanf("%f", &meta);
    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo_inicial);
    printf("Digite o valor economizado mensalmente: ");
    scanf("%f", &valor_economizado);
    num_meses = calcula_meses_para_meta(meta, saldo_inicial, valor_economizado);
    exibe_progresso(num_meses);
    return 0;
}
int calcula_meses_para_meta(float meta, float saldo, float econo)
{
    int num_meses, qtd;
    float x;
    x = saldo + econo;
    do
    {
        x = x + econo;
        qtd++;
    } while (x < meta);
    num_meses = qtd;

    return num_meses;
}
void exibe_progresso()
{
    int mes, qtd;
    float valor_acumulado, meta;
    printf("Progresso mensal: ");
    do
    {
        printf("Mes %d: Saldo acumulado = %.2f\n", mes, valor_acumulado);
        qtd++;
        mes = qtd;
    } while (meta > valor_acumulado);
}