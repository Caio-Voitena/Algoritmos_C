// Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
// brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
// a. Data do jogo;
// b. Time mandante;
// c. Time visitante;
// d. Gols do mandante;
// e. Gols do visitante.
// Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
// o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação.
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano, golM, golV;
    char timeM[50], timeV[50];
}campeonato;

int main()
{
    campeonato camp[5];
    int i;
    
    for (i = 0; i < 5; i++)
    {
        printf("Digite a data do jogo: ");
        scanf("%d/%d/%d", &camp[i].dia, &camp[i].mes, &camp[i].ano);

        printf("Digite o nome do time mandante: ");
        fflush(stdin);
        scanf("%[^\n]", camp[i].timeM);

        printf("Digite o nome do time visitante: ");
        fflush(stdin);
        scanf("%[^\n]", camp[i].timeV);

        printf("Quantos gols o time mandante fez? ");
        scanf("%d", &camp[i].golM);

        printf("Quantos gols o time visitante fez? ");
        scanf("%d", &camp[i].golV);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Tabela de resultados\n");
        printf("--------------------\n");
        printf("Data %d/%d/%d\n", camp[i].dia, camp[i].mes, camp[i].ano);
        printf("O time %s (mandante) fez %d gols\n", camp[i].timeM, camp[i].golM);
        printf("O time %s (visitante) fez %d gols\n", camp[i].timeV, camp[i].golV);
        if (camp[i].golM > camp[i].golV)
        {
            printf("O time mandante venceu de %d a %d\n", camp[i].golM, camp[i].golV);
        }
        if (camp[i].golV > camp[i].golM)
        {
            printf("O time visitante venceu de %d a %d\n", camp[i].golV, camp[i].golM);
        }
        if (camp[i].golV == camp[i].golM)
        {
            printf("O jogo deu empate %d a %d\n", camp[i].golM, camp[i].golV);
        }
    }
    return 0;
}