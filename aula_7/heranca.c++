#include <iostream>
#include <string>

using namespace std;

class Veiculo{
private:
    string nome;
    int rodas;
    int potencia;
    double velocidade;

public:
    Veiculo(){};
    Veiculo(string nome,int rodas, int potencia, double velocidade);
    ~Veiculo(){};
    void descreveVeiculo();
}

class Automovel: public Veiculo{
private:
    string marca;
    int porta;


public:
    Automovel(){};
    Automovel(string nome,int rodas, int potencia, double velocidade, string marca);
    ~Automovel(){};
    void mostraAutomovel();
};


class Motociclo: public Veiculo{
private:
    int assentos;
public:
    Motociclo(){};
    Motociclo(string nome,int rodas, int potencia, double velocidade, int assentos);
    ~Motociclo(){};
    void mostraMotociclo();
};

int main(){
    Motociclo m;
    return 0;
}