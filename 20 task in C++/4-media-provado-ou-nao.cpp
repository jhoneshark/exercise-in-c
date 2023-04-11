#include <iostream>
#include <iomanip>

int main() {
    double a, b, media;
    std::cout << "Digite a primiera nova: ";
    std::cin >> a;

    std::cout << "Digite a segunda nota: ";
    std::cin >> b;

    media = (a + b) / 2;

    if (media > 6.0) {
        std::cout << std::fixed << std::setprecision(1) 
        << "aprovado\n" "Media: " << media << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) 
        << "reprovado\n" "Media: " << media << std::endl;
    }
    
    return 0;
}