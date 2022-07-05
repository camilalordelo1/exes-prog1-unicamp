#include <stdio.h>

int main()
{
    float notas[20], pesquisaNota = 0.0;
    int valida;
    
    for (int i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
    }
    
    while (pesquisaNota >= 0){
        // Reiniciando variável
        valida = 0;
        
        scanf("%f", &pesquisaNota);
        
        // Validação se negativo    
        if(pesquisaNota < 0){
            break;
        }
        
        // Rodando o array inteiro      
        for (int i = 0; i < sizeof(notas); i++) {
            // Procurando nota igual  
            if(pesquisaNota == notas[i]){
                valida = 1;
                break;
            }
        }
        
        // Saída
        if(valida){
            printf("existe\n");
        } else {
            printf("nao existe\n");
        }
    }

    return 0;
}


