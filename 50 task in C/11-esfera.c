#include <stdio.h>
#include <math.h>

int main()
{
    double raio, pi, esfera;
    pi = 3.14159;
    printf("Digite o Raio: ");
    scanf("%lf", &raio);
    esfera = (4.0 / 3.0) * pi * pow(raio, 3); // pow é a função que calcula a potência
    printf("VOLUME = %.3lf", esfera);
    return 0;
}