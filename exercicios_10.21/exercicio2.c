//Defina uma matriz com 3 linhas e 5 colunas e imprima o somatório dos elementos de sua última coluna.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL)); //inicializa semente aleatoria
    int matriz[3][5];
    int l, c, soma = 0;
    
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 5; c++)
        {
            //preenche e imprime matriz
            matriz[l][c] = rand() % 10;
            printf("%d ", matriz[l][c]);
            
            //se for elemento da ultima coluna, acumula na variavel soma
            if(c == 4){
                soma = soma + matriz[l][c];
            }
        }
        printf("\n"); 
    }
    printf("A soma da ultima coluna eh: %d \n", soma);
    //outra forma de resolver:
    //percorre somente a ultima coluna
    //for (l = 0; l < 3; l++)
    // {
    //   soma = soma + matriz[l][3];
    // }
    
    return 0;
}