#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, diferenca;

    printf("Digite a hora inicial e a hora final separadas por um espaco (exemplo: 16 2): ");
    scanf("%d %d", &hora_inicio, &hora_fim);

    if (hora_inicio == hora_fim) {
        printf("O JOGO DUROU 24 Horas (S)");
    } else if (hora_fim >= hora_inicio) {
        diferenca = hora_fim - hora_inicio;
        printf("O JOGO DUROU %d HORAS (S)\n", diferenca);
    } else {
        diferenca = hora_fim - hora_inicio + 24;
        printf("O JOGO DUROU %d HORAS (S)\n", diferenca);
    }
    return 0;
}