#include <stdio.h>

int main()
{
    float pi, a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    pi = 3.14159;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    triangulo = (a * c)/2; ///area = (base * altura) / 2
    circulo = pi * c * c; /// area = PI * raio * raio
    trapezio = (a + b) * c /2;///área = ((base_maior + base_menor) * altura) / 2
    quadrado = b * b;/// area = lado * lado
    retangulo = a *b ;///area = base * altura

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
    return 0;
}


