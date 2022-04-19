#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, mes, ano;
    char *mesCorreto;
    char mesString[13][10] = {
        {' '},
        {'j','a','n','e','i','r','o'}, 
        {'f','e','v','e','r','e','i','r','o'}, 
        {'m','a','r','c','o'},
        {'a','b','r','i','l'}, 
        {'m','a','i','o'}, 
        {'j','u','n','h','o'}, 
        {'j','u','l','h','o'}, 
        {'a','g','o','s','t','o'}, 
        {'s','e','t','e','m','b','r','o'}, 
        {'o','u','t','u','b','r','o'}, 
        {'n','o','v','e','m','b','r','o'}, 
        {'d','e','z','e','m','b','r','o'}
    };
        
    scanf("%d/%d/%d", &data, &mes, &ano);
    
    for (int i = 1; i < sizeof(mesString); i++) {
        if(mes > 12) {
            printf("Mes invalido\n");
            break;
        }
        if (mes < 13 && mes == i){
            mesCorreto = mesString[i];
            printf("%d de %s de %d\n", data, mesCorreto, ano);
        };
    }
    return 0;
}
