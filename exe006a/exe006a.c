#include <stdio.h>

#define N 20

int main()
{
    int m[N][N];
    int nLinha, nCol, l, c;
    
    // Lendo número de linhas e colunas
    scanf("%d %d",&nLinha,&nCol);
    
    // Lendo matriz
    for (l = 0; l < nLinha; l++) 
        for (c = 0; c < nCol; c++)
            scanf("%d", &m[l][c]);

    
    // Exibindo matriz
    for (c = 0; c < nCol; c++){
        for (l = 0; l < nLinha; l++){
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
