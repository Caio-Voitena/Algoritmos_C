#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[500];
    int tamanho, num_palavras;

    printf("Digite uma frase ou texto: ");
    fflush(stdin);
    fgets(string, 200, stdin);
    tamanho = strlen(string) - 1;

    printf("Numero de palavras: %d", num_palavras);
    return 0;
}