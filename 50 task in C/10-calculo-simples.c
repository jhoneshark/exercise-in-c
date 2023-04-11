#include <stdio.h>

int main()
{
    int codPeca, numPecas;
    double valor, total;

    printf("Na mesma linha informe o CODIGO da peca o NUMERO \nde pecas e o VALOR unitaro nessa mesma ordem: ");
    scanf("%d %d %lf", &codPeca, &numPecas, &valor);
    total = (numPecas * valor);
    printf("Na mesma linha informe o CODIGO da peca o \nNUMERO de pecas e o VALOR unitaro nessa mesma ordem: ");
    scanf("%d %d %lf", &codPeca, &numPecas, &valor);
    total += (numPecas * valor);

    printf("VALOR A PAGAR: R$ %.2lf", total);
    return 0;
}
