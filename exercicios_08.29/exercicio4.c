#include <stdio.h>
#include <stdlib.h>
int main()
{ // Em uma loja de eletrodomésticos, as compras têm um preço à vista, ou acréscimo de 10 % para pagamentos em 2 vezes,
    // ou ainda, acréscimo de 20% para pagamento em 3 vezes. O algoritmo deve pedir para o usuário digitar o valor da compra
    // à vista e a opção de compra. O algoritmo deve exibir qual o valor final a ser pago

    float valor, aumento1, aumento2;
    int opcao, opcao2x, opcao3x;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("\ndigite a opcao de pagamento (1x ou 2x ou 3x): ");
    scanf("%d", &opcao);
    aumento1 = valor * 0.1;
    aumento2 = valor * 0.2;
    opcao2x = aumento1 + valor;
    opcao3x = aumento2 + valor;
    switch (opcao)
    {
    case 1:
        printf("Compra a vista: %.2f", valor);
        break;
    case 2:
        printf("Parcelada em 2x: %.2d", opcao2x);
        break;
    case 3:
        printf("Parcelada em 3x: %.2d", opcao3x);
        break;
    default:
        printf("Opcao de pagamento invalida");
        exit(1);
        break;
    }
    return 0;
}