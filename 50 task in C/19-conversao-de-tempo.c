#include <stdio.h>

int main()
{
    int segundos, minutos, horas;
    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos);
    /// Os operadores de módulo (%) são usados para obter o número
    /// de segundos restantes depois de calcular as horas e os minutos.
    minutos = segundos / 60;
    minutos = minutos % 60;
    horas = minutos / 60;
    segundos = segundos % 60;

    printf("%d:%d:%d", horas, minutos, segundos);
    return 0;
}
