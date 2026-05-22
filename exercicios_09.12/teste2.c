#include <stdio.h>
#include <stdlib.h>
int main()
// Construir um programa que leia valores inteiros do teclado até que o produto (multiplicação) desses valores ultrapasse 100.
{
    int num, mult = 1;
    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num = 0)
        {
            printf("Zero digitado. Finalizando!");
            exit(1);
        }

        mult = mult * num;
        printf("Multiplicacao parcial: %d \n", mult);
    } while (mult <= 100);
    printf("Finalizando com %d", mult);

    return 0;
}