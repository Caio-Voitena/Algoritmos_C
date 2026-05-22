#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Escreva um programa que receba do teclado uma string de até 200 caracteres e um determinado
// caractere, e devolva a localização da última ocorrência desse caractere na string. Se o caractere
// não aparecer na string, o programa deve exibir uma mensagem informando isso.
int main(){
    char frase[200];
    
    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase, 200, stdin);

    return 0;
}