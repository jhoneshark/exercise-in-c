#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia, calc;
    printf("Digite 2 valores separados por espaco: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite mais 2 valores: ");
    scanf("%lf %lf", &x2, &y2);

    calc = pow((x2 - x1),2) + pow((y2 - y1),2);

    distancia = sqrt(calc);

    printf("%.4lf", distancia);
    return 0;
}
