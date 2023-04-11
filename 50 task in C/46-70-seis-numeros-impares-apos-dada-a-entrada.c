#include <stdio.h>

int main() {
    int entrada, i, impares[6], numeros;
    int tamanhoArray = sizeof(impares) / sizeof(impares[0]);
    printf("Digite um vamor inteiro: ");
    scanf("%d", &entrada);

    numeros = entrada;

    if (entrada > 0) {
        for (i = 0; i < tamanhoArray; ) {
            if (numeros % 2 != 0) {
                impares[i] = numeros;
                i++;
            }
            numeros++;
        }  
    }

    for (i = 0; i < 6; i++) {
        printf("%d\n", impares[i]);
    }
    return 0;
}