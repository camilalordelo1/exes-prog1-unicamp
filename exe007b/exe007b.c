#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra[100];
    int valida = 0;
    
    scanf("%s", palavra);
    
    // strlen() retorna o tamanho da string
    for (int i = strlen(palavra) - 2, i2 = 0; i >= 0; i--, i2++) {
        if(toupper(palavra[i + 1]) != toupper(palavra[i2])){
            valida = 1;
        } 
        
    }

    if(valida == 0){
        printf("Esta palavra e um palindromo\n");
    } else{
        printf("Esta palavra nao e um palindromo\n");
    }

    return 0;
}
