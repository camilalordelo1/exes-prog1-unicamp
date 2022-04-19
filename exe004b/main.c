#include <stdio.h>
int Fatorar(int fator)
{
    int valorFatorado = fator;
    while (fator > 1) {
        fator--;
        valorFatorado *= fator;
    }
    return valorFatorado;
}

int main()
{
    int n, s, nFatorado, sFatorado, nCombinacoes;
    scanf("%d", &n);
    scanf("%d", &s);
    
    nFatorado = Fatorar(n);
    sFatorado = Fatorar(s);
    
    
    if(nFatorado == sFatorado) {
        nCombinacoes = 1;
    } 
    else 
    if (nFatorado == 0 || sFatorado == 0) {
        nCombinacoes = 0;
    } 
    else {
        nCombinacoes = (nFatorado)/((sFatorado)*(Fatorar(n-s)));
    }
    
    printf("%d\n", nCombinacoes);
}

