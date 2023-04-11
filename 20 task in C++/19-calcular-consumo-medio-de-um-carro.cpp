#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float distancia, combustivelGasto, consumoMedio;
    cout << "Informe a distancia percorrida em KM: ";
    cin >> distancia;
    cout << "Informe quanto gastou de combustivel em Litros: ";
    cin >> combustivelGasto;

    consumoMedio = distancia / combustivelGasto;
    cout << "Consumo medio e de: " << fixed << setprecision(2)<< consumoMedio << "KM/L";
    return 0;
}