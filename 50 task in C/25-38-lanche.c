#include <stdio.h>

int main() {
    float cachorroQuente, xSalada, xBacon, torradaSimples, refrigerante, total;
    int codigo, qt;

    cachorroQuente = 4.00;
    xSalada = 4.50;
    xBacon = 5.00;
    torradaSimples = 2.00;
    refrigerante = 1.50;

    printf("Digite 2 numeros inteiros separados por espaco!\n");
    printf("O primeiro representa o produto e o segundo a quantidade: ");
    scanf("%d %d", &codigo, &qt);

    if (codigo == 1) {
        total = cachorroQuente * qt;
        printf("Total: R$ %.2f", total);
    } else if (codigo == 2) {
        total = xSalada * qt;
        printf("Total: R$ %.2f", total);
    } else if (codigo == 3) {
        total = xBacon * qt;
        printf("Total: R$ %.2f", total);
    } else if (codigo == 4) {
        total = torradaSimples * qt;
        printf("Total: R$ %.2f", total);
    } else if (codigo == 5) {
        total = refrigerante * qt;
        printf("Total: R$ %.2f", total);
    } else {
        printf("Nao temos esse codigo cadastrado! tente de 1 a 5 !");
    }
    return 0;
}
