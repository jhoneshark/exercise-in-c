#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float raio, metadeRaio, area, pi= 3.14159;
    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    metadeRaio = raio / 2;
    area = (pi * pow(metadeRaio, 2));
    cout << "A area do circulo e: " << fixed << setprecision(2) << area; 
    return 0;
}