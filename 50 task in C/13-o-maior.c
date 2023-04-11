#include <stdio.h>

int main()
{
    int a,b,c,maiorNumero;
    printf("Digite 3 valores separados por espaco: ");
    scanf("%d %d %d", &a, &b, &c);

    maiorNumero = a;

    if(b > maiorNumero) {
        maiorNumero = b;
    }

    if( c > maiorNumero) {
        maiorNumero = c;
    }

    printf("%d eh o maior", maiorNumero);
    return 0;
}
