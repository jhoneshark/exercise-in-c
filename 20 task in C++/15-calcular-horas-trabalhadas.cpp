#include <iostream>
using namespace std;

int main() {
    float valorPorHora, horas, salario;
    cout << "Qual e o valor da hora trabalhada?: ";
    cin >> valorPorHora;
    
    cout << "Quantas horas voce trabalhou no mes?: ";
    cin >> horas;

    salario = horas * valorPorHora;

    cout << "Voce vai receber ao fim do mes: " << salario << endl;
    return 0;
}