// Crie uma função que preencha um vetor de mil posições com valores aleatórios de 1 até 6. Conte quantas vezes cada
// número foi sorteado. Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vetor[1000], i, num;

    for (i = 0; i < 1000; i++)
    {
        vetor[i] = rand() % 6 + 1;
        printf("%d ", vetor[i]);
    }
    for (i = 0; i < 1000; i++)
    {
    }

    return 0;
}