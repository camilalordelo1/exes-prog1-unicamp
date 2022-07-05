#include <stdio.h>
#include <math.h>
#define TAM 10

void mostraVetorB(int* vB, int n){
    for (int i = 0; i < n; i++){
        printf("%d\n", vB[i]);
    }
    
}

int main()
{
    int vetorA[TAM];
    int vetorB[TAM];
    
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetorA[i]);
        vetorB[i] = pow(vetorA[i], 3);
    }
    
    mostraVetorB(vetorB, TAM);

    return 0;
}
