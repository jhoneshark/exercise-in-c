#include <stdio.h>

double calcularArea(double pi, double raio) {
    double resultado = pi * (raio * raio);
    return resultado;
}

int main()
{
    double pi = 3.14159;
    double raio = 100.64;
    double resultado = calcularArea(pi, raio);
    printf("O calculo da area é: %.4f", resultado);
    return 0;
}
