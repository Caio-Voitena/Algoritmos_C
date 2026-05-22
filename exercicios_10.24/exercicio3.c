// Escreva um programa que verifica se uma string é um palíndromo, ou seja,
// é a mesma quando lida de trás para frente ou de frente para trás
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char str[100];
    int inicio, fim, palindromo = 1;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha '\n' do final da string
    fim = strlen(str) - 1;
    if (str[fim] == '\n')
    {
        str[fim] = '\0';
        fim--;
    }
    // Verifica se é um palindromo
    inicio = 0;
    while (inicio < fim)
    {
        if (str[inicio] != str[fim])
        {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo)
    {
        printf("A string e um palindromo.\n");
    }
    else
    {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}