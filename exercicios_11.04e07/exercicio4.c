#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// protótipos das funções
int somaDiv(int num);
void compara(int valor, int div);

int main()
{
    srand(time(NULL));
    int num, divisores;
    do
    {
        num = rand() % 30;
        divisores = somaDiv(num);
        compara(num, divisores);
    } while (num != 0);

    return 0;
}

int somaDiv(int num)
{
    int soma = 0;
    // percorre as possibilidades de [1, num-1]
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}

void compara(int valor, int div)
{
    if (valor == div)
    {
        printf("O numero %d eh perfeito!\n", valor);
    }
    else
    {
        printf("O numero %d nao eh perfeito!\n", valor);
    }
}
