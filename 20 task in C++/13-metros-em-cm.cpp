#include <iostream>
using namespace std;

int main() {
    float metros; 
    int centimentos;
    cout << "Digite a primeira nota: ";
    cin >> metros;

    centimentos = metros * 100;

    cout << metros <<" Metro(s) tem ->: " <<centimentos;   
    return 0;
}