#include <stdio.h>
#include <stdlib.h>
// Escreva um algoritmo que encontre o quinto número maior que 1000 cuja divisão por 11 tenha resto 5.
int main()
{
    int num = 1000, cont = 0;
    do
    {
        if (num % 11 == 5)
        {
            printf("Encontrado %d\n", num);

            cont++;
        }
        num++;
    } while (cont < 5);

    return 0;
}