#include <stdio.h>

int main()
{
    int dias, meses, anos, resto;
    printf("Digite sua idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 360;
    resto = dias % 360;
    meses = resto / 30;
    resto = resto % 30;

    printf("%d ano (s)\n", anos);
    printf("%d mes (es)\n", meses);
    printf("%d dia (s)\n", resto);
    return 0;
}
