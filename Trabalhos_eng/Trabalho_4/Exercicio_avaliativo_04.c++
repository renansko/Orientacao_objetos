#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Moeda{
    public:
        double valor;
        string nome;
    Moeda(){};
    Moeda(double valor,  string nome):
    valor(valor), nome(nome){};
    
    ~Moeda(){

    };

    double getValor(){
        return valor;
    }
    string getNome(){
        return nome;
    }
    void descreveMoeda(){
        cout << "Valor da moeda: " << valor << endl;
        cout << "Nome: " << nome << endl;
    }
};

class Cofrinho{
    private:
        Moeda *m;
        double acc = 0.0;

    public: 
    Cofrinho(){};

    ~Cofrinho(){       
    };

    void adicionar(Moeda *m){
        if(m->nome == "Real" || m->nome == "real"){
            acc = acc + m->valor;
        }
        else{
            cout << "Essa moeda nao eh valida! ("<< m->nome << ")"<< endl; 
        }
    }
    double calcularTotal(){
        cout << "Valor total de dinhero em real : " << acc << endl;
    }
};


int main(){
    Moeda m = Moeda(100, "Real");
    Moeda n = Moeda(100, "Dolar");
    Cofrinho c = Cofrinho();
    c.adicionar(&m);
    c.adicionar(&m);
    c.adicionar(&m);
    c.adicionar(&n);
    c.calcularTotal();
    return 0;
}