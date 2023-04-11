#include <stdio.h>

int main()
{
    int entrada, notas100, notas50, notas20, notas10, notas5, notas2, nota1;
    printf("Digite um valor a ser sacado: ");
    scanf("%d", &entrada);
    printf("Valor da entrada foi: %d\n", entrada);
    
    notas100 = entrada / 100;
    entrada = entrada % 100;

    notas50 = entrada / 50;
    entrada = entrada % 50;

    notas20 = entrada / 20;
    entrada = entrada % 20;

    notas10 = entrada / 10;
    entrada = entrada % 10;

    notas5 = entrada / 5;
    entrada = entrada % 5;

    notas2 = entrada / 2;
    entrada = entrada % 2;

    nota1 = entrada / 1;
    entrada = entrada % 1;

    printf("%d nota (s) de R$ 100,00\n", notas100);
    printf("%d nota (s) de R$ 50,00\n", notas50);
    printf("%d nota (s) de R$ 20,00\n", notas20);
    printf("%d nota (s) de R$ 10,00\n", notas10);
    printf("%d nota (s) de R$ 5,00\n", notas5);
    printf("%d nota (s) de R$ 2,00\n", notas2);
    printf("%d nota (s) de R$ 1,00\n", nota1);

    return 0;
}