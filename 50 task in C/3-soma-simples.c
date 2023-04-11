#include <stdio.h>

int soma(int a, int b){
    int resultado = a + b;
    return resultado;
}

int main()
{
    int a = 30;
    int b = 10;
    int resultado = soma(a,b);
    printf("SOMA = %d", resultado);
    return 0;
}
