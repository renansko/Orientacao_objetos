#include <iostream>
#include <string>

using namespace std;

class Data{
public:
    int dia;
    int mes;
    int ano;

    void MostraData(){
        cout << dia << "/" << mes << "/" << ano << endl;
    }

    Data(int d, int m, int a){
        dia = d;
        mes = m;
        ano = a;
        cout << "Construtor da data: ";
        MostraData();
    }

    //Construtor da data, sem data
    Data(){
        cout << "Construtor da data, sem data." << endl;
    }

    ~Data(){
        cout << "Destrutor da data: ";
        MostraData();
    }
};

int main(){
    Data feriados[3];
    Data proclamacao = Data(15, 11, 2022);
    Data natal = Data(25, 12, 2022);
    Data ano_novo = Data(01, 01, 2023);

    feriados[0] = proclamacao;
    feriados[1] = natal;
    feriados[2] = ano_novo;

    return 0;
}
