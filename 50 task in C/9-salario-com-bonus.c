#include <stdio.h>

int main()
{
    char nome[100];
    double salary, vendas, comissao, total, porcetagem;
    printf("Ola digite seu nome: ");
    scanf("%s", nome);
    printf("Informe seu salario fixo: ");
    scanf("%lf", &salary);
    printf("Infome o valor de vendas total em dinheiro: ");
    scanf("%lf", &vendas);
    porcetagem = 15;
    comissao = (porcetagem/100) * vendas;
    total = comissao + salary;
    printf("%s\n", nome);
    printf("TOTAL = R$ %.2lf", total);
    return 0;
}
