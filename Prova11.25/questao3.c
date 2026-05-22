#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo_cidade, num_livros, num_visitantes;
    char nome_cidade[50];
} biblioteca;

int main()
{
    biblioteca bibliotecas[5];
    int i, menor, maior, qtd;
    float soma = 0.0, media_visitantes, media_livros;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o codigo da cidade: ");
        scanf("%d", &bibliotecas[i].codigo_cidade);

        printf("Digite o nome da cidade: ");
        fflush(stdin);
        scanf("%[^\n]", bibliotecas[i].nome_cidade);

        printf("Digite a quantidade de livros disponiveis: ");
        scanf("%d", &bibliotecas[i].num_livros);

        printf("Digite o numero de visitantes anuais da biblioteca em 2024: ");
        scanf("%d", &bibliotecas[i].num_visitantes);
    }
    for (i = 0; i < 5; i++)
    {
        soma = soma + bibliotecas[i].num_livros;
        qtd++;
    }
    media_livros = soma / qtd;
    printf("A media dos valores eh: %.1f \n", media_livros);

    menor = bibliotecas[0].num_livros;
    maior = bibliotecas[0].num_livros;
    for (i = 0; i < 5; i++)
    {
        soma = soma + bibliotecas[i].num_visitantes;

        if (bibliotecas[i].num_visitantes < menor)
        {
            menor = bibliotecas[i].num_visitantes;
        }
        if (bibliotecas[i].num_visitantes > maior)
        {
            maior = bibliotecas[i].num_visitantes;
        }
    }
    printf("O menor valor de visitantes eh de %d, cidade: %s\n", menor, bibliotecas[i].nome_cidade);
    printf("O maior valor de visitantes eh de %d, cidade: %s\n", maior, bibliotecas[i].nome_cidade);

    if (bibliotecas[i].num_livros > 50000)
    {
        for (i = 0; i < 5; i++)
        {
            soma = soma + bibliotecas[i].num_visitantes;
            qtd++;
        }
    }
    media_visitantes = soma / qtd;
    printf("A media de visitantes anuais das cidades que possuem +50000 livros eh: %.1f", media_visitantes);
    
    return 0;
}