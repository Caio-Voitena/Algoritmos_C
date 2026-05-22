#include <stdio.h>
#include <stdlib.h>
int main()
// Quico tem 1,40m e cresce 2cm por ano, enquanto Chaves tem 1,10m e cresce 3cm por ano. Construa um algoritmo que calcule e
// imprima quantos anos serão necessários para que Chaves seja maior que Quico
{
    int anos = 1, quico = 140, chaves = 110;
    while (chaves < quico)
    {
        quico = quico + 2;
        quico = chaves + 3;
        anos++;
    }
    printf("Serao necessarios %i anos para Chaves passar Quico em altura", anos);

    return 0;
}