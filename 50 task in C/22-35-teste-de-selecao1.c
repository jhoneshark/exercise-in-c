#include <stdio.h>

int main() {
    int A, B, C, D;
    printf("Digite 4 numeros separados por espaco: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (B > C && D > A && C + D > A + B && A > 0 && B > 0 && C > 0 && D > 0) {
        printf("Valores aceitos");
    } else {
        printf("Valores nao aceitos");
    }
    return 0;
}
