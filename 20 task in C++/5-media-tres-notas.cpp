#include <iostream>
#include <iomanip>

int main() {
    float nota1, nota2, nota3 , media;
    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;

    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;

    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;

    float menorNota = nota1;
    if (nota2 < menorNota) {
        menorNota = nota2;
    }
    if (nota3 < menorNota) {
        menorNota = nota3;
    }
    
    media = (nota1 + nota2 + nota3 - menorNota) / 2;
    if (media > 6.0) {
        std::cout << std::fixed << std::setprecision(1) 
        << "aprovado\n" "Media: " << media << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) 
        << "reprovado\n" "Media: " << media << std::endl;
    }
    
    return 0;
}
