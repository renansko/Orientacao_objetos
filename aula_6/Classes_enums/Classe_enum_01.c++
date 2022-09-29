#include <iostream>
#include <string>

using namespace std;

enum class Cor1{

    vermelho,
    verde,
    azul
};

enum class Cor2{
    vermelho,
    preto,
    branco
};

enum class Pessoa{
    bom,
    mau
};

int main(){
    int vermelho = 10;
    cout << "Valor = " << vermelho << endl; 

    Cor1 cor = Cor1::azul;
    if(cor == Cor1::azul){
        cout << "A cor eh azul" << endl;
    }
    else{
        cout << "A cor nao eh azul" << endl;
    }

    Pessoa p = Pessoa::bom;
    if(p == Pessoa::mau){
        cout << "Pessoa: Mau!" << endl;
    }
    else{
        cout << "Pessoa: Bom!" << endl;
    }

    // if (cor == p){
    //     cout << "Vermelho e bom!" << endl;
    // }

    cout << int(cor) << endl;
    return 0;
}