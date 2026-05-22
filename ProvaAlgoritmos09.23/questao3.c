#include <stdio.h>
#include <stdlib.h>
// Uma loja deseja automatizar o controle de seu estoque. Você foi
// contratado para desenvolver um programa em C que registre a quantidade de produtos vendidos e
// atualize o estoque disponível. O programa deve seguir as seguintes especificações:
// ● O programa deve solicitar ao usuário a quantidade inicial de produtos em estoque.
// ● Em seguida, o programa deve permitir registrar as vendas diárias. A cada venda, o
// usuário informará a quantidade de produtos vendidos no dia.
// ● O estoque deve ser atualizado após cada venda, e o programa deve exibir o estoque
// restante.
// ● O programa deve impedir que as vendas superem a quantidade disponível em estoque
// (caso isso ocorra, deve exibir uma mensagem de erro e solicitar uma nova entrada).
// ● O programa termina quando o estoque acabar (ou seja, o estoque chegar a 0) ou quando
// o usuário decidir encerrar manualmente.
// ● Após o encerramento, o programa deve exibir a quantidade total de produtos vendidos.
int main()
{
    int estoque, vendas, produtos, soma = 0;
    char opcao;

    do
    {
        printf("Digite a quantidade inicial de produtos em estoque: ");
        scanf("%d", &produtos);
    } while (estoque < 0);

    do
    {
        do
        {
            printf("Digite a quantidade de produtos vendidos hoje: ");
            scanf("%d", &vendas);
            if (vendas > estoque)
            {
                printf("Quantidade indisponivel no estoque!\n");
            }

        } while ((vendas < 0) || (vendas > estoque));

        soma = soma + vendas;
        estoque = estoque - vendas;
        printf("Estoque atual: %d\n", estoque);
        printf("Voce deseja continuar? [S/N]: ");
        getchar();
        scanf("%c", &opcao);
    } while ((estoque > 0) && ((opcao == 'S') || (opcao == 's')));

    printf("Quantidade de itens vendidos: %d", soma);

    return 0;
}