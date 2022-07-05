#include <stdio.h>
#include <math.h>

void media(float n1, float n2, char l){
    float media = 0.0, mediaGeo = 0.0;
    if(l == 'A'){
        media = (n1+n2)/2;
        printf("%.3f\n", media);
    } else {
        mediaGeo = sqrt(n1*n2);
        printf("%.3f\n", mediaGeo);
    }
}

int main()
{   
    float a1 = 0.0, a2 = 0.0;
    char letra;
    
    scanf("%c", &letra);
    scanf("\n%f %f\n", &a1, &a2);

    media(a1, a2, letra);
    
    return 0;
}
