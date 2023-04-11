#include <stdio.h>

int main() {
    double tempo, velocidade, consumo;
    double liNescess;
    consumo = 12;
    printf("Dite o tempo gasto na viagem: ");
    scanf("%lf" , &tempo);
    printf("Digite a media de velocidade da viagem: ");
    scanf("%lf", &velocidade);

    liNescess = (tempo * velocidade) / consumo;
    printf("%.3lf", liNescess);
    return 0;
}
