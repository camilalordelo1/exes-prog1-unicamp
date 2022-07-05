#include <stdio.h>

int LeVetor(int vetorDefault[]){
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorDefault[i]);
    }
    return 0;
}

int main()
{
    int vetor1[10], vetor2[10];
    
    LeVetor(vetor1);
    LeVetor(vetor2);
    
    for (int i = 0; i < 9; i++) {
        printf("%d|%d|", vetor1[i], vetor2[i]);
    }
    printf("%d|%d|\n", vetor1[9], vetor2[9]);
    
    return 0;
}
