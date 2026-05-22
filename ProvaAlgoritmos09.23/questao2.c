#include <stdio.h>
#include <stdlib.h>
// Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios
//(excluindo ele mesmo) é igual ao próprio número. Por exemplo, o número 6 é perfeito, pois 1+2+3 é igual a 6.
// Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.
// Entrada: A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N
// (1 ≤ N ≤ 20), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém
// um valor inteiro X (1 ≤ X ≤ 108), que pode ser ou não, um número perfeito.
// Saída: Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh
// perfeito”, de acordo com a especificação fornecida.
int main()
{
    int qtd_testes, num, i, soma = 0, cont_testes;

    do
    {
        printf("Quantos testes você ira realizar? ");
        scanf("%d", &qtd_testes);
    } while ((qtd_testes < 1) || (qtd_testes > 20));

    for (cont_testes = 0; cont_testes < qtd_testes; cont_testes++)
    {
        soma = 0;
    }

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
    } while ((num < 1) || (num > 1000000000));

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
            printf("Divisor encontrado %d\n", i);
        }
    }
    if (soma == num)
    {
        printf("%d eh perfeito!", num);
    }
    else
    {
        printf("%d nao eh perfeito!", num);
    }

    return 0;
}