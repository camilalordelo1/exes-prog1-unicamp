#include <stdio.h>

int main()
{
    // Produto x Valor
    int produto[10], nVendas; 
    float valorProduto[10], lucro = 0.0;
    
    // Entrada de Dados
    for (int i = 0; i < 10; i++) {
        scanf("%d", &produto[i]);
        nVendas += produto[i];
    }
    for (int i = 0; i < 10; i++) {
        scanf("%f", &valorProduto[i]);
        lucro += (valorProduto[i]*produto[i]);
    }
    
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, nVendas);
    
    return 0;
}


