#include <stdio.h>
int main()
{
    float altura, largura;

    printf("---Tabela de tamanhos de camiseta---\n");
    printf("PP = Altura Maxima=68cm Largura Maxima=50cm\n");
    printf("P = Altura Maxima=70cm Largura Maxima=53cm\n");
    printf("M = Altura Maxima=72cm Largura Maxima=56cm\n");
    printf("G = Altura Maxima=75cm Largura Maxima=59cm\n");
    printf("GG = Altura=+75cm Largura=+59cm\n");

    printf("Digite a altura do seu abdomen(cm): ");
    scanf("%f", &altura);
    printf("Digite a largura do seu abdomen(cm): ");
    scanf("%f", &largura);
    if ((altura <= 68) && (largura <= 50))
    {
        printf("Tamanho de camiseta recomendado para seu tamanho eh: PP");
    }
    else if ((altura <= 70) && (altura > 68) && (largura <= 53) && (largura > 50))
    {
        printf("Tamanho de camiseta recomendado para seu tamanho eh: P");
    }
    else if ((altura <= 72) && (altura > 70) && (largura <= 56) && (largura > 53))
    {
        printf("Tamanho de camiseta recomendado para seu tamanho eh: M");
    }
    else if ((altura <= 75) && (altura > 72) && (largura <= 59) && (largura > 56))
    {
        printf("Tamanho de camiseta recomendado para seu tamanho eh: G");
    }
    else if ((altura > 75) && (largura > 59))
    {
        printf("Tamanho de camiseta recomendado para seu tamanho eh: GG");
    }
    else
    {
        printf("Valores de tamanhos invalidos");
    }

    return 0;
}