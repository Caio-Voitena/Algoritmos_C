// Escreva um programa que sorteie aleatoriamente 1000 números e armazene-os em um vetor.
// Em seguida, o usuário deve digitar um número e seu programa deve informar se o número digitado está contido
// no vetor ou não. Se estiver, diga em que posições do vetor ele é encontrado.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vetor[1000];
    int num, encontrado = 0, i;
    for (i = 0; i < 1000; i++)
    {
        vetor[i] = rand() % 1000;
    }
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero %d foi encontrado nas posicoes: ", num);
    for (int i = 0; i < 1000; i++)
    {
        if (vetor[i] == num)
        {
            printf("%d ", i);
            encontrado = 1;
        }
    }
    if (!encontrado)
    {
        printf("nao encontrado no vetor.");
    }
    printf("\n");
    return 0;
}