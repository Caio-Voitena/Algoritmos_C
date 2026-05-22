#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Escreva um programa que leia uma string do teclado (com tamanho máximo de 200 caracteres)
//e conte quantas ocorrências de cada vogal existem nessa string.
int main(){
    char frase[200];

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase, 200, stdin);

    return 0;
}