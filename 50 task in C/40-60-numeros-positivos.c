#include <stdio.h>

int main() {
    float numeros[6];
    int i, valoresP = 0;
    // calcula o tamanho da array e salva na variavel
    int tamandoArray = sizeof(numeros) / sizeof(numeros[0]);

    for (i = 0; i < tamandoArray; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &numeros[i]);
    }

    for ( i = 0; i < tamandoArray; i++) {
        if (numeros[i] > 0 ) {
            valoresP++;
        }
    }
    printf("%d valores positovos", valoresP);
    return 0;
}