#include <stdio.h>
int main(){
    //quantidade de linhas e colunas
    int matriz[3][4];
    int l, c;
    
    //ajusta o indice da linha
    for (l = 0; l < 3; l++)
    {
        //ajusta  o indice da coluna
        for (c = 0; c < 4; c++)
        {
            printf("preenchendo linha %d coluna %d : ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    //imprime matriz
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}