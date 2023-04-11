#include <stdio.h>

int main()
{
    int a, b, c, d, diferenca;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    printf("Digite o quarto valor: ");
    scanf("%d", &d);
    diferenca = (a * b) - (c * d);

    printf("DIFERENCA = %d", diferenca);
    return 0;
}
