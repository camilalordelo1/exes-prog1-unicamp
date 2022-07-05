/******************************************************************************

Exe009Bb - Faça dois procedimentos que implementem a soma e a multiplicação de	dois	
números	complexos z e w.

*******************************************************************************/
#include <stdio.h>

void somaNComplexos(int zReal, int zImaginaria, int wReal, int wImaginaria){
    int real = 0, imaginaria = 0;
    
    real = zReal + wReal;
    imaginaria = zImaginaria + wImaginaria; // + i
    printf("%d + %di\n", real, imaginaria);
}

void multNComplexos(int zReal, int zImaginaria, int wReal, int wImaginaria){
    int real = 0, imaginaria = 0;
    
    real = (zReal * wReal) - (zImaginaria * wImaginaria);
    imaginaria = (zImaginaria * wReal) + (zReal * wImaginaria); // * i
    
    printf("%d + %di\n", real, imaginaria);
}


int main()
{   
    int zReal, zImaginaria, wReal, wImaginaria;
    char operador;
    
    scanf("%d %d %c %d %d", &zReal, &zImaginaria, &operador, &wReal, &wImaginaria);
    
    if(operador == '+'){
        somaNComplexos(zReal, zImaginaria, wReal, wImaginaria);
    }
    
    if(operador == '*'){
        multNComplexos(zReal, zImaginaria, wReal, wImaginaria);
    }
    
    return 0;
}
