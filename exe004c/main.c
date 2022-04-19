#include <stdio.h>

int main()
{
    int entrada, impar, par;
    impar = 0;
    par = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &entrada);
        if (entrada % 2 == 0){
            par++;
        } else {
            impar++;
        }
        
    }
    printf("%d pares, %d impares\n", par, impar);
}

