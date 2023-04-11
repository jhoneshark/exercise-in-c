#include <stdio.h>

int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main()
{
    int a = 10;
    int b = 9;
    int resultado = soma(a, b);
    printf("O resultado da soma é: %d", resultado);
    return 0;
}