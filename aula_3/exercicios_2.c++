#include <iostream>

using namespace std;

int main()
{
    string jogador1, jogador2;
    int num_jogador1, num_jogador2, tentativas = 0;

    cout << "Jogador 1: ";
    getline(cin, jogador1);
    cout << "Informe o numero a ser acertado: ";
    cin >> num_jogador1;

    cout << "Jogador 2: ";
    getline(cin, jogador2);
    cout << "Informe o numero a ser acertado: ";
    cin >> num_jogador2;
    
    while(num_jogador1 != num_jogador2)
    {
    cout << "Informe o numero a ser acertado: ";
    cin >> num_jogador2;
    tentativas = tentativas + 1;
    }

}
