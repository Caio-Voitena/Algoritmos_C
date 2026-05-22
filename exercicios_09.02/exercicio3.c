#include <stdio.h>
int main()
{
    // Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos",
    // indicando se os valores lidos são múltiplos entre si

    int num1, num2, resultado;
    printf("Digite o valor de A:\n");
    scanf("%d", &num1);
    printf("Digite o valor de B: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        resultado = num1 % num2;
    }
    else
    {
        resultado = num2 % num1;
    }
    if (resultado = 0)
    {
        printf("Sao multiplos");
    }
    else
    {
        printf("Nao sao multiplos");
    }

    return 0;
}