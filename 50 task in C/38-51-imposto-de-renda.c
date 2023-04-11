#include <stdio.h>

int main() {
    float isento = 2000.00, salario, imposto08,imposto18, valorTaxado, imposto28;
    printf("Digite seu salario para calcular o IR: ");
    scanf("%f", &salario);

        if (salario > 0.00 && salario <= isento) {
            printf("Isento");
        } else if (salario > isento && salario <= 3000.00) {
            valorTaxado = (salario - isento);
            imposto08 = valorTaxado * 0.08;
            printf("%.2f", imposto08);
        } else if (salario > 3000.00 && salario <= 4500.00) {
            imposto08 = (3000.00 - isento) * 0.08;
            imposto18 = (salario - 3000.00) * 0.18;
            valorTaxado = imposto08 + imposto18;
            printf("%.2f", valorTaxado);
        } else if (salario > 4500.00) {
            imposto08 = (3000.00 - isento) * 0.08;
            imposto18 = (4500.00 - 3000.00) * 0.18;
            imposto28 = (salario - 4500.00) * 0.28;
            valorTaxado = imposto08 + imposto18 + imposto28;
            printf("%.2f", valorTaxado);
        }
        
        
        
    return 0;
}
