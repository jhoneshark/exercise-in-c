#include <iostream>
#include <iomanip>

int main() {
    double a, b, media;
    std::cout << "Digite o primeiro valor: ";
    std::cin >> a;

    std::cout << "Digite o segundo valor: ";
    std::cin >> b;

    media = (a + b) / 2;

    std::cout << std::fixed << std::setprecision(1) << media << std::endl;
    return 0;
}