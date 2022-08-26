#include <iostream>
#include <string>

using namespace std;


class Conta{
public:
    int     numero;
    string  titular;
    float   saldo;
    float   limite;

    Conta(int n, string t, float s, float l){
        numero  = n;
        titular = t;
        saldo   = s;
        limite  = l;
    }

    ~Conta(){
    }

    void informacoes(){
        cout << "Numero da conta: "  << numero << endl;
        cout << "Titular da conta: " << titular << endl;
        cout << "Saldo da conta: "   << saldo << endl;
        cout << "Limite da conta: "  << limite << endl;
    }

    bool depositar (float valor){
        if(valor > 0){
            saldo = saldo + valor;
            return true;
        }
        else{
            return false;
        }
    }

       bool saque (float valor){
        if(saldo + limite >= valor){
            if(valor > saldo){
                limite = valor - saldo;
            }
            saldo = saldo - valor;
            return true;
        }
        else{
            return false;
        }
    }

    bool transferir(Conta &destino, float valor){
        if(saque(valor)){
            destino.depositar(valor);
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Conta c1(112233, "Alberto guerreiro", 1000, 200);
    Conta c2(112244, "Ferdinan ferrarine", 5000, 1000);


    if(!(c1.transferir(c2, 500))){
        cout << "Erro na transferencia" << endl;
    }
    else {
    cout << "" << endl;
    cout <<"INFORMACOES APOS O DEPOSITOR" << endl;
    c1.informacoes();

    cout << "" << endl;
    cout <<"INFORMACOES APOS O SAQUE" << endl;
    c2.informacoes();
    }

    return 0;
}