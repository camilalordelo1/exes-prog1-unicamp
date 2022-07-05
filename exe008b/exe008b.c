#include <stdio.h>
#include <math.h>

int main()
{
    // declaracao
    struct pontos {
        float r1[2][2];
        float r2[2][2];
    };
    struct pontos vetorRetangulo;
    
    float area1, area2;
    
    // entrada
    
    for (int i = 0; i < 2; i++){ 
        for (int j = 0; j < 2; j++) {
            scanf("%f ", &vetorRetangulo.r1[i][j]);
        }
    }
        
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            scanf("%f ", &vetorRetangulo.r2[i][j]);
        }
    }
 
    //calculo da area
    area1 = (vetorRetangulo.r1[1][0] - vetorRetangulo.r1[0][0]) * (vetorRetangulo.r1[1][1] - vetorRetangulo.r1[0][1]);
    area2 = (vetorRetangulo.r2[1][0] - vetorRetangulo.r2[0][0]) * (vetorRetangulo.r2[1][1] - vetorRetangulo.r2[0][1]);
    

    //saida
    if(area2 <= area1){
        printf("o segundo retangulo esta contido no primeiro\n");
    } else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}
