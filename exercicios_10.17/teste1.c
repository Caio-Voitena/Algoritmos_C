#include <stdio.h>
#include <stdlib.h>
int main()
{
    char data_nasc[11];
    char nome[100];
    int i;

    printf("Digite sua data de nascimento: ");
    fflush(stdin); // limpa o buffer do teclado da pra usar getchar tbm mas o mais usado é esse ai
    fgets(data_nasc, 11, stdin);

    printf("Digite seu nome: ");
    fflush(stdin); // limpa o buffer do teclado
    fgets(nome, 100, stdin);

    printf("Data nasc digitada: %s\n", data_nasc);
    printf("Nome digitado: %s\n", nome);

    for (i = 0; i < 100; i++)
    {
        printf("Indice %d: %c \n", i, nome[i]);
    }

    return 0;
}