#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float peso, altura, imc;
    cout << "Informe seu peso: ";
    cin >> peso;
    cout << "Informe seu altura: ";
    cin >> altura;

    imc = peso / (pow(altura, 2));

    if ( imc <= 16.9) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Muito abaixo do peso";
    }
    else if (imc >= 17 && imc <= 18.4) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Abaixo do peso";
    }
    else if (imc >= 18.5 && imc <= 24.9) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Peso normal";
    }
    else if (imc >= 25 && imc <= 29.9) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Acima do peso";
    }
    else if (imc >= 30 && imc <= 34.9) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Obesidade grau I";
    }
    else if (imc >= 35 && imc <= 40) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Obesidade grau II";
    }
    else if (imc > 40) {
        cout << "IMC de: '" << fixed << setprecision(2) << imc << "' Obesidade grau III";
    }
    return 0;
}