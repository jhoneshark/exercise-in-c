#include <iostream>

int main() {
    int entrada;
    std::cout << "Digite um numero: ";
    std::cin >> entrada;

    if (entrada > 0) {
        std::cout << "positivo" << std::endl;
    } else if (entrada < 0) {
        std::cout << "negativo" << std::endl;
    }
    return 0;
}