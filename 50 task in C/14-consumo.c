#include <stdio.h>

int main() {
    double km, combustivel, consumo;
    printf("Digite a distancia: ");
    scanf("%lf", &km);
    printf("Digite o total de combustivel gasto: ");
    scanf("%lf", &combustivel);

    consumo = km / combustivel;
    printf("%.3lf km/l", consumo);
    return 0;
}
