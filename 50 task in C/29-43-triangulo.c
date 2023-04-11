#include <stdio.h>

int main() {
    float a, b, c, p, area;
    printf("Digite 2 entradas(separadas por espaco): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < (b + c)) {
        p = a + b + c;
        printf("Perimetro = %.1f", p);
    } else {
        area = ((a + b) * c) / 2;
        printf("Area = %.1f", area);
    }
    return 0;
}