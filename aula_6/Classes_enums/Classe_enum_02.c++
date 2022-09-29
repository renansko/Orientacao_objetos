#include <iostream>
#include <string>

using namespace std;

enum ArcoIris{
    violeta,
    indigo,
    azul,
    verde,
    amarelo,
    laranja,
    vermelho
} a1;

enum class CorOlhos: char{
    azul,
    verde,
    marrom
} co;

int main(){

    cout << "Tamanho do ArcoIris: " << sizeof(a1) << endl;
    cout << "Tamanho do CorOlhos: " << sizeof(co) << endl;

    return 0;
}