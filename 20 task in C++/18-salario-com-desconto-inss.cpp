#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valorPorHora, horas, salarioLi, inss, salarioBru;
    cout << "Quanto voce ganha por hora?: ";
    cin >> valorPorHora;
    
    cout << "Quantas horas voce trabalhou no mes?: ";
    cin >> horas;

    salarioBru = horas * valorPorHora;
    inss = salarioBru * 0.08;
    salarioLi = salarioBru - inss;

    cout << "Salario bruto :R$" << fixed << setprecision(2) << salarioBru << endl;
    cout << "Quanto pagou de inss :R$" << fixed << setprecision(2) << inss << endl;
    cout << "Salario liquido :R$" << fixed << setprecision(2) << salarioLi << endl;

    return 0;
}