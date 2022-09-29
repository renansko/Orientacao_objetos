#include <iostream>
#include <string>

using namespace std;


class Elevador{
    public:
    int andar;
    int total_andar;
    int capacidade;
    int pessoas;

    // Elevador(int andar, int total_andar, int capacidade, int pessoas):
    //     andar(andar), total_andar(total_andar), capacidade(capacidade), pessoas(pessoas){
    //     }
    
    ~Elevador(){

    }

    void Inicializa(){
        andar = 0;
        pessoas = 0;
    }

    void Entra(){
        if(pessoas >= capacidade){
            cout << "O ELEVADOR ESTA LOTADO" << endl;
            return;
        }
        else{
            pessoas ++;
            cout << "Entrou uma pessoa no elevador, atualmente se encontram as demais pessoas no elevador:  " << pessoas << endl;

        }
    }
    void Sai(){
        if (pessoas >= 0){
            cout << "O elevador esta vazio!" << endl;
        }
        else{
            pessoas --;
            cout << "Saiu uma pessoa no elevador, atualmente se encontram as demais pessoas no elevador:  " << pessoas << endl;

        }
    }
    void Sobe(){
        if(andar >= total_andar){
            cout << "Voce ja esta no ultimo andar" << endl;
        }
        else{
            andar ++;
            cout << "Voce subiu um andar, atualmente se encontra no andar: " << andar << endl;

        }
    }

     void Desce(){
        if(andar <= 0 ){
            cout << "Voce ja esta no primeiro andar" << endl;
        }
        else{
            andar --;
            cout << "Voce desceu um andar, atualmente se encontra no andar: " << andar <<;
        }
    }
};


int main(){
    Elevador hotel;

    hotel.total_andar = 10;
    hotel.capacidade = 10;

    
    hotel.Inicializa();
    hotel.Sobe();



    return 0;
}