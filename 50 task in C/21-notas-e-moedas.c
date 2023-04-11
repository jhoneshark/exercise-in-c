#include <stdio.h> 

int main() {

    float entrada;
    int nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50;
    int moeda25, moeda10, moeda5, moeda01;

    printf("Digite um valor em reais ate com centavos apos o ponto: ");
    scanf("%f", &entrada);

    int valor = (int)(entrada * 100); // converte entrada para centavos

    nota100 = valor / 10000;
    valor %= 10000;  // mesma coisa de "valor = valor % 10000"

    nota50 = valor / 5000;
    valor %= 5000;

    nota20 = valor / 2000;
    valor %= 2000;

    nota10 = valor / 1000;
    valor %= 1000;

    nota5 = valor / 500;
    valor %= 500;

    nota2 = valor / 200;
    valor %= 200;

    moeda1 = valor / 100;
    valor %= 100;

    moeda50 = valor / 50;
    valor %= 50;

    moeda25 = valor / 25;
    valor %= 25;

    moeda10 = valor / 10;
    valor %= 10;

    moeda5 = valor / 5;
    valor %= 5;

    moeda01 = valor / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n", moeda1);
    printf("%d moeda(s) de R$ 0,50\n", moeda50);
    printf("%d moeda(s) de R$ 0,25\n", moeda25);
    printf("%d moeda(s) de R$ 0,10\n", moeda10);
    printf("%d moeda(s) de R$ 0,05\n", moeda5);
    printf("%d moeda(s) de R$ 0,01\n", moeda01);

    return 0;
}