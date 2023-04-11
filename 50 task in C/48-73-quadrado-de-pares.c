#include <stdio.h>

int main() {
    int i, entrada;
    printf("Digite um valor inteiro: ");
    scanf("%d", &entrada);

    int q = 2;
    
    for (i = 2; i <= entrada; i += 2) {
        printf("%d^%d = %d\n", q , 2, i * i);
        q += 2;
    } 
    return 0;
}

