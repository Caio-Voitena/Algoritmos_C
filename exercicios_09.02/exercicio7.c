#include <stdio.h>
#include <stdlib.h>
int main()
{ /*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno.
  Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela
  mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada
  for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média
  calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame".
  No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. Imprima então a mensagem
  "Nota do exame: " acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente
  calculada e divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.",
  (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na
  última linha uma mensagem "Media final: " seguido da média final para esse aluno.*/

    float n1, n2, n3, n4, media, nota_exame, media_exame;
    printf("Digite o valor de N1: ");
    scanf("%f", &n1);
    printf("Digite o valor de N2: ");
    scanf("%f", &n2);
    printf("Digite o valor de N3: ");
    scanf("%f", &n3);
    printf("Digite o valor de N4: ");
    scanf("%f", &n4);
    media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0);
    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado\n");
    }
    else if ((media >= 5.0) && (media < 7.0))
    {
        printf("Aluno em recuperacao\n");
        printf("Digite a nota da recuperacao: ");
        scanf("%f", &nota_exame);
        media_exame = (media + nota_exame) / 2.0;
        if (media_exame >= 5.0)
        {
            printf("Aluno reprovado no exame\n");
        }
        else
        {
            printf("Aluno reprovado no exame\n");
        }
    }
    else if ((media >= 0.0) && (media < 5.0))
    {
        printf("Aluno reprovado\n");
    }
    else
    {
        printf("Erro");
        exit(1);
    }

    return 0;
}