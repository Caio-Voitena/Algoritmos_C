#include <stdio.h>
#include <stdlib.h>
int main()
{ /*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir,
calcule e mostre o valor da conta a pagar. Código Especificação Preço
1 Cachorro-quente R$ 12,00
2 X-Salada R$ 15,50
3 X-Bacon R$ 18,00
4 Torrada simples R$ 8,00
5 Refrigerante R$ 4,50*/
    int codigo, qtd;
    float preco_final;
    printf("---Iten do Cardapio--- \n");
    printf("Cachorro-quente R$ 12,00\n");
    printf("X-Salada R$ 15,50\n");
    printf("X-Bacon R$ 18,00\n");
    printf("Torrada simples R$ 8,00\n");
    printf("Refrigerante R$ 4,50\n\n");

    printf("Digite o codigo do item desejado: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade do item desejado: ");
    scanf("%d", &qtd);

    if (qtd <= 0)
    {
        printf("Quantidade invalida!\n");
        exit(1);
    }

    switch (codigo)
    {
    case 1:
        preco_final = 12.00 * qtd;
        break;
    case 2:
        preco_final = 15.50 * qtd;
        break;
    case 3:
        preco_final = 18.00 * qtd;
        break;
    case 4:
        preco_final = 8.00 * qtd;
        break;
    case 5:
        preco_final = 4.50 * qtd;
        break;
    default:
        printf("Codigo invalido!");
        exit(1);
    }
    printf("Preco final da conta: %.2f\n", preco_final);

    return 0;
}