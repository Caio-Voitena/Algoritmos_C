#include <stdio.h>
#include <stdlib.h>
// Você foi contratado para desenvolver um programa que ajude a calcular o
// valor da passagem para um sistema de transporte público. As regras de tarifação são as seguintes:
// ● Crianças com idade menor que 6 anos viajam gratuitamente.
// ● Estudantes (de 6 a 18 anos) pagam meia tarifa.
// ● Adultos (19 a 59 anos) pagam tarifa cheia.
// ● Idosos (60 anos ou mais) têm um desconto de 30% na tarifa.
// A tarifa cheia do transporte público é de R$ 5,00.
// Requisitos:
// 1. O programa deve solicitar que o usuário informe a idade e se ele é estudante (S/N) para determinar a tarifa correta.
// 2. Use estruturas condicionais para implementar as regras descritas.
// 3. Faça a verificação se os dados de entrada são válidos.
// 4. Exiba o valor da passagem correspondente com uma mensagem clara.
int main()
{
    int idade;
    char opcao;
    float tarifa = 5, estudante = 2.5, idoso = 3.5;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if ((idade > 6) || (idade <= 18))
    {
        printf("Voce eh estudante? (S/N):");
        getchar();
        scanf("%c", &opcao);
    }
    switch (opcao)
    {
    case 's':
        printf("O valor a ser pago eh: %.2f", estudante);
        break;

    case 'n':
        if ((idade < 0) || (idade > 130))
        {
            printf("Idade invalida");
        }
        else if (idade < 6)
        {
            printf("Viagem gratuita");
        }
        else if ((idade >= 19) || (idade <= 59))
        {
            printf("O valor a ser pago eh de %.2f", tarifa);
        }
        else if (idade >= 60)
        {
            printf("O valor a ser pago eh de %.2f", idoso);
        }
        break;
    }

    return 0;
}