#include <stdio.h>

int main() {
    int iniHora, iniMinut, fimHora, fimMinu;
    printf("Digite hora e minuto de inicio e fim tudo separado apenas por espaco: ");
    scanf("%d %d %d %d",&iniHora, &iniMinut, &fimHora, &fimMinu);

    // Converter as horas e minutos em minutos, 
    // para poder calcular a diferença.
    int iniTotalMinu = iniHora * 60 + iniMinut;
    int fimTotalMinu = fimHora * 60 + fimMinu;

    int difEmMenuTotal = fimTotalMinu - iniTotalMinu;

    // Converter a diferença em minutos de 
    // volta para horas e minutos.
    int difHora = difEmMenuTotal / 60;
    int difMinu = difEmMenuTotal % 60;

    printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)",difHora,difMinu);
    return 0;
}