#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com valores lidos do teclado.
// O programa deverá aceitar somente números pares entre 1 e 20. Ao final, imprima todos os valores salvos no vetor,
// além da média dos valores, o menor e o maior valor
int main()
{
    int vetor[6], i, qtd = 0, maior, menor;
    float soma = 0.0, media;
    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite um valor para o indice %d: ", i);
            scanf("%d", &vetor[i]);
        } while ((vetor[i] % 2 != 0) || (vetor[i] < 1) || (vetor[i] > 20));
    }
    menor = vetor[0];
    maior = vetor[0];
    for (i = 0; i < 6; i++)
    {
        // impressao de valores
        printf("Imprimindo indice %d: %d\n", i, vetor[i]);
        // para calculo de media
        soma = soma + vetor[i];
        qtd++;

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    media = soma / qtd;
    printf("A media dos valores eh: %.1f \n", media);
    printf("O menor valor eh: %d\n", menor);
    printf("O maior valor eh: %d\n", maior);
    return 0;
}