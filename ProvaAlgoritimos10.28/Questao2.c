#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vetor[4];
    int opcao, opcao2;
    int soma = 0;
    int grif = 0, sons = 0, lufa = 0, corv = 0;

    do
    {
        printf("\nMenu: \n");
        printf("1. Adicionar pontos a uma casa\n");
        printf("2. Subtrair pontos de uma casa\n");
        printf("3. Visualizar pontuacao das casas\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Selecione a casa para adicionar pontos:\n");
            printf("1. Grifinoria\n");
            printf("2. Sonserina\n");
            printf("3. Corvinal\n");
            printf("4. Lufa-Lufa\n");
            printf("Opcao: ");
            scanf("%d", &opcao2);
            switch (opcao2)
            {
            case 1:
                printf("\nQuantos pontos deseja adicionar? :");
                scanf("%d", &soma);
                grif = soma + grif;
                printf("%d", grif);
                break;
            case 2:
                printf("\nQuantos pontos deseja adicionar? :");
                scanf("%d", &soma);
                sons = soma + sons;
                printf("%d", sons);
                break;
            case 3:
                printf("\nQuantos pontos deseja adicionar? :");
                scanf("%d", &soma);
                corv = soma + corv;
                printf("%d", corv);
                break;
            case 4:
                printf("\nQuantos pontos deseja adicionar? :");
                scanf("%d", &soma);
                lufa = soma + lufa;
                printf("%d", lufa);
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.");
                break;
            }

            break;

        case 2:
            printf("Selecione a casa para subtrair pontos:\n");
            printf("1. Grifinoria\n");
            printf("2. Sonserina\n");
            printf("3. Corvinal\n");
            printf("4. Lufa-Lufa\n");
            printf("Opcao: ");
            scanf("%d", &opcao2);
            switch (opcao2)
            {
            case 1:
                printf("\nQuantos pontos deseja subtrair? :");
                scanf("%d", &soma);
                grif = grif - soma;
                printf("%d", grif);
                break;
            case 2:
                printf("\nQuantos pontos deseja subtrair? :");
                scanf("%d", &soma);
                sons = sons - soma;
                printf("%d", sons);
                break;
            case 3:
                printf("\nQuantos pontos deseja subtrair? :");
                scanf("%d", &soma);
                corv = corv - soma;
                printf("%d", corv);
                break;
            case 4:
                printf("\nQuantos pontos deseja subtrair? :");
                scanf("%d", &soma);
                lufa = lufa - soma;
                printf("%d", lufa);
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
            }

            break;

        case 3:
            printf("Selecione a casa para visualizar pontos:\n");
            printf("1. Grifinoria\n");
            printf("2. Sonserina\n");
            printf("3. Corvinal\n");
            printf("4. Lufa-Lufa\n");
            printf("Opcao: ");
            scanf("%d", &opcao2);
            switch (opcao2)
            {
            case 1:
                printf("\nPontos: %d", grif);
                break;
            case 2:
                printf("\nPontos: %d", sons);
                break;
            case 3:
                printf("\nPontos: %d", corv);
                break;
            case 4:
                printf("\nPontos: %d", lufa);
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
            }

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}