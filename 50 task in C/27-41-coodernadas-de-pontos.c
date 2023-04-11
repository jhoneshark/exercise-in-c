#include <stdio.h>

int main()
{
    float x, y;
    printf("Digite os valores das coordenadas 'x' 'y' separados por espaco: ");
    scanf("%f %f", &x, &y);

    if (x == 0.0 && y == 0.0) {
        printf("Origem\n");
    } else if (x == 0.0 && y != 0.0) {// verifica se x é igual a zero e y é diferente de zero
        printf("Eixo Y%f\n",y); // se sim, imprime "Eixo Y"
    } else if (y == 0.0 && x != 0.0) {// verifica se y é igual a zero e x é diferente de zero
        printf("Eixo X%f\n",x); // se sim, imprime "Eixo X"
    } else if (x > 0.0 && y > 0.0) {
        printf("Q1\n");
    } else if (x > 0.0 && y < 0.0) {
        printf("Q4\n");
    } else if (x < 0.0 && y < 0.0)  {
        printf("Q3\n");
    }  else if (x < 0.0 && y > 0.0) {
        printf("Q2\n");
    }
    return 0;
}
