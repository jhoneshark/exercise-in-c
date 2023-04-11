#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valorTotalVendas, salarioBru, SalarioLi, comissao;
    cout << "Digite seu falario fixo bruto no mes: ";
    cin >> salarioBru;
    cout << "Digite o valor total em vendas no mes em reais: ";
    cin >> valorTotalVendas;

    comissao = valorTotalVendas * 0.15;
    SalarioLi = salarioBru + comissao;

    cout << "Sua comissao foi de: R$" << comissao << endl;
    cout << "Salario a recebe no final do mes: R$" << SalarioLi;
    return 0;
}



// Crie um programa que solicita a um vendedor o seu salário fixo e o valor total de suas
// vendas no mês. Sabendo que a sua comissão é de 15%, calcule o salário a receber no final do
// mês.