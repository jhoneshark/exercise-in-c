#include <stdio.h>

int main()
{
    int numero, horasTrabalhada;
    double valorPHora, salary;
    printf("Digite seu numero: ");
    scanf("%d", &numero);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhada);
    printf("Digite o valor a receber por hora: ");
    scanf("%lf", &valorPHora);

    salary = (horasTrabalhada * valorPHora);
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf", salary);
    return 0;
}
