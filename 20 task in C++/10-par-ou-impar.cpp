#include <iostream>
using namespace std;

int main() {
    int entrada;
    cout << "Digite um valor inteiro: ";
    cin >> entrada;

    if (entrada % 2 != 0) {
        cout <<"O valor "<< entrada << " e impar" << endl;
    } else {
        cout << "O valor " << entrada << " e par" << endl;
    }
    return 0;
}