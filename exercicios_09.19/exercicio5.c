#include <stdio.h>
#include <stdlib.h>
// Foi realizada uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo (0 = masc, 1 = fem, 2 = não declarado)
// das pessoas. Faça um programa que leia 50 dados diferentes e informe:
// ● a maior e a menor altura encontradas;
// ● a média de altura das mulheres;
// ● a média de altura da população;
// ● o percentual de homens na população.
int main()
{
    int i, sexo, cont_fem = 0, cont_todos = 0, cont_masc = 0;
    float altura, altura_max = -99999999, altura_min = 99999999, soma_fem = 0, media_fem, soma_todos = 0, media_todos, porc_masc;
    for (i = 1; i <= 5; i++)
    {
        do
        {
            printf("Digite sua altura: ");
            scanf("%f", &altura);
        } while (altura <= 0);

        do
        {
            printf("Digite o sexo [0 - masc, 1 - fem, 2 - nao declarado]: ");
            scanf("%d", &sexo);
        } while ((sexo != 0) && (sexo != 1) && (sexo != 2));

        if (altura > altura_max)
        {
            altura_max = altura;
        }
        if (altura < altura_min)
        {
            altura_min = altura;
        }
        if (sexo == 1)
        {
            soma_fem = soma_fem + altura;
            cont_fem++;
        }
        soma_todos = soma_todos + altura;
        if (sexo == 0)
        {
            cont_masc++;
        }
    }
    media_fem = soma_fem / cont_fem;
    media_todos = soma_todos / cont_todos;
    porc_masc = ((float)cont_masc / cont_todos) * 100;

    printf("Menor altura encontrada: %.2f \n", altura_min);
    printf("Maior altura encontrada: %.2f \n", altura_max);
    printf("Media de altura das mulheres: %.2f \n", media_fem);
    printf("Meida de altura da populacao: %.2f \n", media_todos);
    printf("Porcentagem de homens na populacao: %.1f \n", porc_masc);
    return 0;
}