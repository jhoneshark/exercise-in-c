#include <stdio.h>

int prod(int a, int b) {
    int resultado = a * b;
    return resultado;
}

int main()
{
    int a;
    int b;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite outrao valor inteiro: ");
    scanf("%d", &b);
    int PROD = prod(a,b);
    printf("PROD = %d", PROD);
    return 0;
}
