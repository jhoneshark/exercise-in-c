#include <stdio.h>

int main() {
    int i;
    float valoresP = 0,tempMedia;
    float entrada[6], media;
    // calcula o tamanho da array e salva na variavel
    int tamanhoArray = sizeof(entrada) / sizeof(entrada[0]);

    for (i = 0; i < tamanhoArray; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &entrada[i]);
    }

    for (i = 0; i < tamanhoArray; i++) {
        if (entrada[i] > 0) {
            valoresP++;
            tempMedia += entrada[i];
        }  
    }

    media = tempMedia / valoresP;

    printf("%.0f valores positivos\n%.1f", valoresP, media);
    
    return 0;
}
