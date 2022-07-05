#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, m = 0, valida = 0;
    int** matriz;
    
    scanf("%d %d\n", &n, &m);
    
    //alocação dinamica 
    matriz = malloc(sizeof(int*) * n);
    for(int i = 0; i < m; i++) {
        matriz[i] = malloc(sizeof(int) * (m+1));
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           scanf("%d\n", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(matriz[i][j] != matriz[j][i]){
               valida = 1;
            }
        }
    }
    
    if(valida == 0){
        printf("Eh simetrica\n");
    } else{
        printf("Nao eh simetrica\n");
    }
    
    //liberando memória
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
