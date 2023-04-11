#include <iostream>
#include <random> // biblioteca para trabalhar com numero aleatorios
#include <chrono> // biblioteca para trabalhar com tempo
//  usado para evitar a necessidade de escrever 
//  std:: antes de cada referência a um objeto da
//  biblioteca padrão C++
using namespace std;

void saidaInterface(string player, string computador, int numeroAleatorio, string mensagem){
    cout << "\n";
    cout << mensagem << endl;
    cout << numeroAleatorio << endl;
    cout << "\n";
    cout << "voce escolheu: " << player << endl;
    cout << "PC ficou com: " << computador << endl;
}

int main() {
    int numeroAleatorio;
    string player , numeroGerado, computador;

    // cria um gerador de numeros aleatorios bom base no relogio 
    // cada tempo novo um numero novo e sem repetir consecutivamente
    mt19937 gen(chrono::system_clock::now().time_since_epoch().count());

    // Cria um distribuidor uniforme de inteiros entre 1 e 100
    uniform_int_distribution<> dis(1, 100);

    // Gera e imprime um número aleatório entre 1 e 100
    numeroAleatorio = dis(gen);

    //Aqui garantimos que o programa só vai continuar se o player escreve certo
    while (player != "impar" && player != "par") {
        cout << "Voce quer 'par' ou 'impar'?(Digite corretamente): ";
        cin >> player;
    }

    cout << "\n";

    // Aqui verificamos se o numero gerado é par ou impar
    if (numeroAleatorio % 2 != 0) {
        numeroGerado = "impar";
    } else {
        numeroGerado = "par";
    }

    //Aqui colocamos se o pc é par ou impar com base no que o player escolheu
    if (player == "par") {
        computador = "impar";
    } else if (player == "impar") {
        computador = "par";
    }

    if (player == "par" && numeroGerado == "par") {
        saidaInterface(player, computador, numeroAleatorio, "PARABENS VOCE GANHOU!");
    } else if (player == "impar" && numeroGerado == "impar") {
        saidaInterface(player, computador, numeroAleatorio, "PARABENS VOCE GANHOU!");
    } else if (computador == "par" && numeroGerado == "par") {
        saidaInterface(player, computador, numeroAleatorio, "O COMPUTADOR GANHOU!");
    } else if (computador == "impar" && numeroGerado == "impar") {
        saidaInterface(player, computador, numeroAleatorio, "O COMPUTADOR GANHOU!");
    }
    
    return 0;
}