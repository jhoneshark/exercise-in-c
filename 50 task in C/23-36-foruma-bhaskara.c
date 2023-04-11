#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, R1, R2, delta;
    printf("Digite 3 valores para formula de Bhaskara: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0) {
       printf("Valor de A n pode ser 0");
       printf("Nao e possivel calcular as raizes!\n");
    }
    
    delta = pow(B, 2) - 4 * A * C;

    if (delta < 0) {
        printf("O Delta nao pode ser negativo: %f\n", delta);
        printf("Nao e possivel calcular as raizes!\n");
    } else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }

    return 0;
}
