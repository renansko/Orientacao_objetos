#include <iostream>
#include <string>

using namespace std;

class Carro{
    //Atributos
    public:
    string modelo;      //Modelo do carro
    string cor;         //Cor do carro
    double rendimento;
    double km_rodados;
    int tanque;         //Combustivel do carro

    //Método
    void descrever(){
        cout << "Modelo " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Quantidade de litros: " << tanque << "L" << endl;
        cout << "Kilometros rodados: " << km_rodados << "Km" <<endl;
    }
    void rmpl()
    {
        rendimento = km_rodados/tanque;
        cout << "O rendimento do carro por litro eh de: " << rendimento << "Km rodados" << endl;
    }
};

int main()
{
    Carro c1;
    Carro c2;

    c1.modelo = "Fusca";
    c1.cor = "Azul";
    c1.tanque = 50;
    c1.descrever();

    c2.modelo = "BMW";
    c2.cor = "Preta";
    c2.tanque = 75;
    c2.descrever();

    c2.km_rodados = 2500;
    c2.rmpl();
    return 0;
}