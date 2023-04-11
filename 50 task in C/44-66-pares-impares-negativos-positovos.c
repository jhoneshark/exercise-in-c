#include <stdio.h>

int main() {
    //declaro o tipo e inicializo algumas vaiaveis em 0 para receber somas
    int i, entrada[5], pares=0,impar=0,positivo=0,negativo=0;
    // calcula o tamanho da array e salva na variavel
    int tamanhoArray = sizeof(entrada) / sizeof(entrada[0]); 

    for (i = 0; i < tamanhoArray; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &entrada[i]);
    }

    for (i = 0; i < tamanhoArray; i++) {
        if (entrada[i] % 2 == 0) {
        pares++;
        }
    }
    
    for (i = 0; i < tamanhoArray; i++) {
        if(entrada[i] % 2 != 0) {
        impar++;
        }
    }
    
    for (i = 0; i < tamanhoArray; i++) {
        if (entrada[i] > 0) {
        positivo++;
        }
    }

    for (i = 0; i < tamanhoArray; i++) {
        if (entrada[i] < 0) {
        negativo++;
        }
    }
    
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
