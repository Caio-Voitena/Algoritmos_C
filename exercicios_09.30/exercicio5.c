#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
// os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
// teclado e verificar se esse número está contido ou não no vetor.
int main()
{
    //inicializa semente aleatoria
    srand(time(NULL));
    int vetor[1000], i, num;
    for (i = 0; i < 1000; i++)
    {
        //preenche com valores aleatorios (% 20 + 1 gera numeros aleatorios de 0 a 19 +1) / (rand()%101 - 50 gera entre -50 a 50)
        vetor[i] = rand() % 20 + 1;
        printf("Indice %d: %d \n", i, vetor[i]);
        // preenchimento manual
        // do
        // {
        //     printf("Digite um valor positivo para o indice %d: ", i);
        //     scanf("%d", &vetor[i]);
        // } while (vetor[i] < 0);
    }
    printf("Digite um numero a ser buscado: ");
    scanf("%d", &num);
    for (i = 0; i < 1000; i++)
    {
        if (vetor[i] == num)
        {
            printf("o valor existe no vetor");
            exit(1);
        }
    }
    printf("O valor nao existe no vetor");

    return 0;
}