//ESSE CODIGO DEMORA COMPILAR
#include <stdio.h>

int main() {
    int entrada, i;
    printf("Digite um valor interiro: ");
    scanf("%d", &entrada);

    if (entrada % 2 == 0 || entrada % 2 != 0) { // aqui garantimas quem a entrada pode ser qualquer numero inteiro.
        for (i = 0; i < entrada; i++) {
            if (i % 2 != 0) {
            printf("%d\n", i);
            } 
        }
    }
    return 0;
}