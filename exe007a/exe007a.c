#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    
    fgets(palavra, 100, stdin);
    
    // strlen() retorna o tamanho da sting
    for (int i = strlen(palavra)- 2 ; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
