#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int grau = 0;
    float* coeficientes; //array
    float x = 0.0;
    
    //lendo grau
    scanf("%d", &grau);
    
    //alocando memória dinamica
    coeficientes = (float *) malloc(sizeof(float) * (grau+1));
    
    // lendo coeficientes
    for (int i = 0; i <= (grau); i++) {
        scanf("%f", &coeficientes[i]);
    }
    
    //lendo x
    scanf("%f", &x);
    
    float resultante = 0.0;
    
    //somando o polinomio
    for (int i = 0; i <= (grau); i++) {
        resultante += coeficientes[i]*(pow(x,i));
    }
    
    // imprimindo o resultado
    printf("%.2f\n", resultante);
    
    //desalocando memoria
    free(coeficientes);
    return 0;
}
