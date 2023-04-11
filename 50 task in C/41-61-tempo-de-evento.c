#include <stdio.h>
#include <time.h>

int main() {
    time_t t1, t2, dif;
    struct tm tm1 = {0}, tm2 = {0};
    int d1, h1, m1, s1, d2, h2, m2, s2;
    printf("Digite o dia inicial: ");
    scanf("%d", &d1);
    printf("Digite a hora inicial exemplo '02:52:20': ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Digite o dia final: ");
    scanf("%d", &d2);
    printf("Digite a hora final exemplo '03:20:10': ");
    scanf("%d:%d:%d", &h2, &m2, &s2);


    // Define a primeira data e hora
    tm1.tm_year = 2023 - 1900;
    tm1.tm_mon = 4 - 1;
    tm1.tm_mday = d1;
    tm1.tm_hour = h1;
    tm1.tm_min = m1;
    tm1.tm_sec = s1;
    t1 = mktime(&tm1); //converte horas em segundos

    // Define a segunda data e hora
    tm2.tm_year = 2023 - 1900;
    tm2.tm_mon = 4 - 1;
    tm2.tm_mday = d2;
    tm2.tm_hour = h2;
    tm2.tm_min = m2;
    tm2.tm_sec = s2;
    t2 = mktime(&tm2); //converte horas em segundos

    dif = difftime(t2, t1); // Calcula a diferença entre as duas datas e horas

    int dias = dif / (24*3600);
    dif = dif %(24*3600);
    int horas = dif / 3600;
    dif = dif % 3600;
    int minutos = dif / 60;
    int segundos = dif % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",dias,horas,minutos,segundos);
    
}
