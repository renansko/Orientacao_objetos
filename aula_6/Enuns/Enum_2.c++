#include <iostream>
#include <string>

using namespace std;


int main(){

    enum Genero{
        masculino,
        feminino
    };

    enum Cor{
        vermelho,
        verde
    };

    Genero g = masculino;
    Cor c = verde;

    if(g == c){
        cout << "Masculino é igual a vermelho! " << endl;
    }

    return 0;
}