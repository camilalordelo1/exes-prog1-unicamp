#include <stdio.h>
#include <math.h>

int main()
{
    // declaracao
    struct ponto {
        float x;
        float y;
    };
    struct ponto vetorPonto[2];
    float cateto1, cateto2, distancia;
    
    // entrada
    for (int i = 0; i < 2; i++){
       scanf("%f %f", &vetorPonto[i].x, &vetorPonto[i].y);
    }
    
    // pow(x,2) retorna o ao quadrado
    cateto1 = pow((vetorPonto[1].x - vetorPonto[0].x), 2);
    cateto2 = pow((vetorPonto[1].y - vetorPonto[0].y), 2);
    
    // sqrt(x) retorna raiz quadrada    
    distancia = sqrt(cateto1 + cateto2);
    
    //saida
    if(distancia < 0.0000001){
        printf("os pontos sao iguais\n");
    } else {
        printf("os pontos nao sao iguais\n");
    }

    return 0;
}
