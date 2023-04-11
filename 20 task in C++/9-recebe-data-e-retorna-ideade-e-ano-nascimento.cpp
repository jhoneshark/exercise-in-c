#include <iostream>
#include <ctime>

int main()
{
    int entrada;
    std::cout << "Digite sua idade ou seu ano de sacimento: ";
    std::cin >> entrada;

    time_t agora = time(0);
    tm *tempoLocal = localtime(&agora);
    int anoAtual = tempoLocal->tm_year + 1900;

    if (entrada < 300 && entrada > 0) {
        int ano = anoAtual - entrada;
        if (tempoLocal->tm_mon < 9 || (tempoLocal->tm_mon == 9 && tempoLocal->tm_mday < 15)) {
            ano--;
        }
        std::cout << "voce nasceu em " << ano << std::endl;
    }
    else if (entrada > 1900) {
        int idade = anoAtual - entrada;
        if (tempoLocal->tm_mon < 9 || (tempoLocal->tm_mon == 9 && tempoLocal->tm_mday < 15)) {
            idade--;
        }
        std::cout << "voce tem " << idade << " anos" << std::endl;
    } else {
        std::cout << "Digite um valor coerente. OBS: niguem vivo hoje tem mais de 200 anos \nou nasceu antes do ano 1900, ou voce e o dracula ?"  << std::endl;
    }

    return 0;
}