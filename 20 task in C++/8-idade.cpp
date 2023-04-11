#include <iostream>
#include <ctime>

int main() {
    int idade;
    std::cout << "Quantos anos voce tem?: ";
    std::cin >> idade;

    time_t agora = time(0);
    tm *tempoLocal = localtime(&agora);
    int anoAtual = tempoLocal->tm_year + 1900;

    int ano = anoAtual - idade;
     if (tempoLocal->tm_mon < 9 || (tempoLocal->tm_mon == 9 && tempoLocal->tm_mday < 15)) {
        ano--;
    }

    std::cout << "voce nasceu em " << ano << std::endl;
    return 0;
}