#include <stdio.h>
#include <math.h>

void calculadora(float x, char op, float y){
    float resultado = 0.0;
    if(op == '+'){
        resultado = x + y;
    } else if (op == '-'){
        resultado = x - y;
    } else if (op == '*'){
        resultado = x * y;
    } else if (op == '/'){
        resultado = x / y;
    } else if (op == '^'){
        resultado = pow(x, y);
    }
    printf("%.3f\n", resultado);
}

int main()
{
    float n1, n2;
    char operador;
    
    scanf("%f%c%f", &n1, &operador, &n2);
    
    calculadora(n1, operador, n2);

    return 0;
}
