#include <iostream>
#include <ctime>

int main() {
    //pega o ano atual seja qual for para fazer o calculo
    time_t agora = time(0);
    tm *tempoLocal = localtime(&agora);
    int anoAtual = tempoLocal->tm_year + 1900;

    int dataNasci;
    std::cout << "Que ano voce nasceu ?: ";
    std::cin >> dataNasci;

    int idade = anoAtual - dataNasci;
     if (tempoLocal->tm_mon < 9 || (tempoLocal->tm_mon == 9 && tempoLocal->tm_mday < 15)) {
        idade--;
    }

    std::cout << "voce tem " << idade << " anos" << std::endl;

    return 0;
}