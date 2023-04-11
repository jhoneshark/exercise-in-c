#include <stdio.h>

int main() {
    float salario, newSalario, reajust;
    printf("Digite seu atual salario: ");
    scanf("%f", &salario);

    if (salario > 0 && salario <= 400.00) {
        reajust = 0.15 * salario;
        newSalario = reajust + salario;
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajust);
        printf("Em porcentagem: 15%%\n");
    } else if (salario >= 400.01 && salario <= 800.00) {
        reajust = 0.12 * salario;
        newSalario = reajust + salario;
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajust);
        printf("Em porcentagem: 12%%\n");
    } else if (salario >= 800.01 && salario <= 1200.00) {
        reajust = 0.10 * salario;
        newSalario = reajust + salario;
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajust);
        printf("Em porcentagem: 10%%\n");
    } else if (salario >= 1200.01 && salario <= 2000.00)  {
        reajust = 0.07 * salario;
        newSalario = reajust + salario;
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajust);
        printf("Em porcentagem: 7%%\n");
    } else if (salario >= 2000) {
        reajust = 0.04 * salario;
        newSalario = reajust + salario;
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajust);
        printf("Em porcentagem: 4%%\n");
    }
    
    
    return 0;
}
