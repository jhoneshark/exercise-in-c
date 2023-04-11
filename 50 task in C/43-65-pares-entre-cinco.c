#include <stdio.h>

int main() {
    int i, valoresPares=0;
    int entrada[5];
    // calcula o tamanho da array e salva na variavel
    int tamanhoArray = sizeof(entrada) / sizeof(entrada[0]);
    
    for (i = 0; i < tamanhoArray; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &entrada[i]);
    }

    for (i = 0; i < tamanhoArray; i++) {
      if (entrada[i] % 2 == 0) {
         valoresPares++;
      }  
    }
    
    printf("%d valores pares", valoresPares);
    return 0;
}