#include <stdio.h>

int main() {
    int i, valor;
    printf("Digite quantos valores quer inserir: ");
    scanf("%d", &valor);

    int entrada[valor];

    for (i = 0; i < valor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &entrada[i]);
    }

    for ( i = 0; i < valor; i++) {
        if (entrada[i] % 2 != 0 && entrada[i] < 0) {
            printf("ODD NEGATIVE\n");
        } else if (entrada[i] % 2 == 0 && entrada[i] < 0) {
            printf("EVEN NEGATIVE\n");
        } else if (entrada[i] % 2 != 0 && entrada[i] > 0) {
            printf("ODD POSITIVE\n");
        } else if (entrada[i] % 2 == 0 && entrada[i] > 0) {
            printf("EVEN NEGATIVE\n");
        } else if (entrada[i] == 0) {
            printf("NULL\n");
        }
    }
    return 0;
}
