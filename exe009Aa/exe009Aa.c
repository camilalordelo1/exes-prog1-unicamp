#include <stdio.h>

void volume_esfera(float raio){
    float volume = 0;
    volume = (4*3.14159*((raio)*(raio)*(raio)))/3;
    printf("%.2f\n", volume);
}

int main()
{
    float r;
    scanf("%f", &r);
    volume_esfera(r);

    return 0;
}
