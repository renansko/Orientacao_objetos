#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class Jogada{
    pedra,
    papel,
    tesoura
};

class JogadorJokenpo{
    private:
    public:
        int vitorias;
        int derrotas; 
        int empates;
        string nome;
        Jogada jogada;
        JogadorJokenpo(){};
        
        JogadorJokenpo(int vitorias, int derrotas, int empates ,string nome, Jogada jogada):
            vitorias(vitorias), derrotas(derrotas), empates(empates), nome(nome), jogada(jogada){

            }
        ~JogadorJokenpo(){};

        jogar(){
            if(jogada == Jogada::pedra){
                cout << "Jogador escolheu pedra" << endl;
            }
            if(jogada == Jogada::papel){
                cout << "Jogador escolheu papel" << endl;
            }
            if(jogada == Jogada::tesoura){
                cout << "Jogador escolheu tesoura" << endl;
            }
        }

        void rank(){
            cout << "Nome do jogador: " << nome << endl;
            cout << "Empates: "<< empates << endl;
            cout << "Derrotas: "  <<derrotas << endl;
            cout << "Vitorias: "<<vitorias << endl;
        }
};

class Partidas{
    private:
    public:
        vector<JogadorJokenpo> listaJogadores;
    
    Partidas(){};
    ~Partidas(){};

    Campeonato(){
        for(int i = 0; i < listaJogadores.size(); i++){
            for(int j = i + 1; j < listaJogadores.size(); j++){
                if((listaJogadores[i].jogada == Jogada::pedra && listaJogadores[j].jogada == Jogada::tesoura) || (listaJogadores[i].jogada == Jogada::tesoura && listaJogadores[j].jogada == Jogada::papel) || (listaJogadores[i].jogada == Jogada::papel && listaJogadores[j].jogada == Jogada::pedra)){
                    listaJogadores[i].vitorias = listaJogadores[i].vitorias + 1;
                    listaJogadores[j].derrotas = listaJogadores[j].derrotas + 1;
                }
                else if((listaJogadores[j].jogada == Jogada::pedra && listaJogadores[i].jogada == Jogada::tesoura) || (listaJogadores[j].jogada == Jogada::tesoura && listaJogadores[i].jogada == Jogada::papel) || (listaJogadores[j].jogada == Jogada::papel && listaJogadores[i].jogada == Jogada::pedra)){
                    listaJogadores[i].derrotas = listaJogadores[i].derrotas + 1;
                    listaJogadores[j].vitorias = listaJogadores[j].vitorias + 1;
                }
                else{
                    listaJogadores[i].empates = listaJogadores[i].empates + 1;
                    listaJogadores[j].empates = listaJogadores[j].empates + 1;
                    }
           }
        }

    }
};

int main(){
    Jogada tesoura = Jogada::tesoura;
    Jogada pedra = Jogada::pedra;
    Jogada papel = Jogada::papel;

    Partidas dia1;

    dia1.listaJogadores.push_back(JogadorJokenpo(0,0,0,"Armando",pedra));
    dia1.listaJogadores.push_back(JogadorJokenpo(0,0,0,"Ferdinan",pedra));
    dia1.listaJogadores.push_back(JogadorJokenpo(0,0,0,"Pedro",papel));
    dia1.listaJogadores.push_back(JogadorJokenpo(0,0,0,"Murilo",pedra));

    dia1.Campeonato();

    for(int i = 0; i < dia1.listaJogadores.size(); i++){
    dia1.listaJogadores[i].rank();
    }

    return 0;
}