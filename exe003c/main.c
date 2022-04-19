#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, total;
    char sinal;
    
    scanf("%f%c%f", &n1, &sinal, &n2);
    
    if(sinal == '+'){
        total = n1+n2;
    } 
    else
    if (sinal == '-'){
        total=n1-n2;
    }
    else
    if (sinal == '*'){
        total= n1*n2;
    }
    else
    if (sinal == '/'){
        total= n1/n2;
    }
    else{
        printf("Operador invalido\n");
        exit(0);
    }
    
    printf("%.3f%c%.3f=%.3f\n", n1, sinal, n2, total);
    return 0;
}