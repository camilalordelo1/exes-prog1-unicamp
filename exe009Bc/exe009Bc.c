/******************************************************************************

exe009Bc = faça	 um	 procedimento que	 receba	 como	 parâmetros	 um	 vetor	 de	 inteiros	 de	
tamanho	N	e	retorne	o	menor e	o	maior elemento	do	vetor.

*******************************************************************************/
#include <stdio.h>

int maiorValor = 0;
int menorValor = 0;

void procuraMenorMaiorValor(int vetor[], int tamanhoVetor){
    menorValor = vetor[0];
    maiorValor = vetor[0];
    for (int i = 0; i < tamanhoVetor; i++) {
        if(vetor[i] < menorValor){
            menorValor = vetor[i];
        }
        
        if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
    }
}

int main()
{
    int tamanhoVetor;
    scanf("%d/n", &tamanhoVetor);

    int vetor[tamanhoVetor];
    
    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d\n", &vetor[i]);
    }
    
    procuraMenorMaiorValor(vetor, tamanhoVetor);
    
    printf("maior valor: %d\n", maiorValor);
    printf("menor valor: %d\n", menorValor);

    return 0;
}
