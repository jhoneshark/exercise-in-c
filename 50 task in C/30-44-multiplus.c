#include <stdio.h>

int main() {
    int a, b;
    printf("Insira 2 valores (separador por espaco): ");
    scanf("%d %d", &a, &b);

    if (b % a == 0) {
        printf("Sao Multiplos.");
    } else {
        printf("Nao Sao Multiplos.");
    }
    
    return 0;
}
