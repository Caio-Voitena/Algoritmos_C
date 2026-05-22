// Crie um programa que cadastre em registros o nome, o peso e a altura de 5 esportistas.
// Apresente na telaos dados de cada esportista e seu IMC (deve haver um campo para o IMC no registro).
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    float peso, altura, imc;
} esportista;

int main()
{
    // criar o vetor de registros
    esportista esp[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do atleta %d: ", i + 1);
        fflush(stdin); // limpa o buffer do teclado antes de ler string
        scanf("%[^\n]", esp[i].nome);

        printf("Digite o peso do atleta %d: ", i + 1);
        scanf("%f", &esp[i].peso);

        printf("Digite a altura do atleta %d: ", i + 1);
        scanf("%f", &esp[i].altura);

        esp[i].imc = esp[i].peso / (esp[i].altura * esp[i].altura);
    }

    for (i = 0; i < 5; i++)
    {
        printf("O IMC do atleta %s eh: %.1f\n", esp[i].nome, esp[i].imc);
    }

    return 0;
}