#include <stdio.h>
#include <stdlib.h>
int main()
{
    float valor, aumento, desconto2;
    int opcao, opcao_p, opcao_a, opcao3;
    ;
    printf("Digite o preço do produto desejado: ");
    scanf("%f", &valor);
    printf("\nDigite a opcao de pagamento: \n 1-pix \n 2-a vista cartao \n 3-2x no cartao \n 4-3x ou mais no cartao: ");
    scanf("%d", &opcao);
    aumento = valor * 0.1;
    desconto2 = valor - (valor * 0.05);
    opcao_p = valor - (valor * 0.1);
    opcao_a = valor - desconto2;
    opcao3 = valor + aumento;
    switch (opcao)
    {
    case 3:
        printf("Compra parcelada em 2x: %.2f", valor);
        break;
    case 1:
        printf("Compra no pix: %.2d", opcao_p);
        break;
    case 4:
        printf("Parcelada em 3x: %.2d", opcao3);
        break;
    case 2:
        printf("Compra a vista: %.2d", opcao_a);
        break;
    default:
        printf("Opcao de pagamento invalida");
        exit(1);
        break;
    }

    return 0;
}