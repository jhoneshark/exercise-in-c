#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string opcao;
    float f, c, temp;
    while (opcao != "f" && opcao != "c") {
        cout << "Voce quer converter a temperatura para 'Fahrenheit' ou 'Celsius', digite 'f' ou 'c': " ;
        cin >> opcao;
    }
    if (opcao == "f") {
        cout << "Informe a temperatura em Celsius: ";
        cin >> c;
        temp = (c * 1.8) + 32;
        cout << "A temperatura em Fahrenheit e: " << fixed << setprecision(0) << temp << "F";
    } else if (opcao == "c") {
        cout << "Informe a temperatura em Fahrenheit: ";
        cin >> f;
        temp = (f - 32) / 1.8;
        cout << "A temperatura em Celsius e: " << fixed << setprecision(0) << temp << "C";
    }
    return 0;
}