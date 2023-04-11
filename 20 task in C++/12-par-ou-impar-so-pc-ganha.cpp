#include <iostream>
#include <random> // biblioteca para trabalhar com numero aleatorios
#include <chrono> // biblioteca para trabalhar com tempo

//  usado para evitar a necessidade de escrever 
//  std:: antes de cada referência a um objeto da
//  biblioteca padrão C++
using namespace std;

void interfaceSaida(string player, string computador, int numeroAleatorio, string mensagem){
    cout << "\n";
    cout << mensagem << endl;
    cout << "\n";
    cout << "voce escolheu: " << player << endl;
    cout << "PC ficou com: " << computador << endl;
    cout << "Numero gerado de '1 a 100' ->: " << numeroAleatorio << endl;
}

int main() {
    int numeroAleatorio;
    string player , numeroGerado, computador;

    // cria um gerador de numeros aleatorios bom base no relogio 
    // cada tempo novo um numero novo e sem repetir consecutivamente
    mt19937 gen(chrono::system_clock::now().time_since_epoch().count());

    // Cria um distribuidor uniforme de inteiros entre 1 e 100
    uniform_int_distribution<> dis(1, 100);

    // Gera e salva um número aleatório entre 1 e 100
    numeroAleatorio = dis(gen);

    // Aqui garantimos que o programa só vai continuar se o player escreve certo
    while (player != "impar" && player != "par") {
        cout << "Voce quer 'par' ou 'impar'?(Digite corretamente): ";
        cin >> player;
    }
    // Aqui colocamos se o pc é par ou impar com base no que o player escolheu
    if (player == "par") {
        computador = "impar";
    } else if (player == "impar") {
        computador = "par";
    }
    // pula linha
    cout << "\n";

    // Aqui verificamos se o numero gerado é par ou impar
    if (numeroAleatorio % 2 != 0) {
        numeroGerado = "impar";
    } else {
        numeroGerado = "par";
    }

    while (true) {
    // se o número gerado for doferente do tipo escolhido pelo computador, gera um novo número e tenta novamente
        if (numeroGerado != computador) {
            numeroAleatorio = dis(gen); // gera um novo numero
            if (numeroAleatorio % 2 != 0) {
                numeroGerado = "impar";
                } else {
                    numeroGerado = "par";
                }
        } else {
        // quando o numero gerado for mesmo tipo escolhido pelo pc cai aqui.
        interfaceSaida(player, computador, numeroAleatorio, "O COMPUTADOR GANHOU!");
        break;
        }
    }
    return 0;
}