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
        int vitorias;
        int derrotas; 
        int empates;
        string nome;
        Jogada jogada;
    public:
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

        enfrentar(JogadorJokenpo *jogador1, JogadorJokenpo *jogador2){
           if((jogador1->jogada == Jogada::pedra && jogador2->jogada == Jogada::tesoura) || (jogador1->jogada == Jogada::tesoura && jogador2->jogada == Jogada::papel) || (jogador1->jogada == Jogada::papel && jogador2->jogada == Jogada::pedra)){
            jogador1->vitorias = jogador1->vitorias + 1;
            jogador2->derrotas = jogador2->derrotas + 1;
           }
           if((jogador2->jogada == Jogada::pedra && jogador1->jogada == Jogada::tesoura) || (jogador2->jogada == Jogada::tesoura && jogador1->jogada == Jogada::papel) || (jogador2->jogada == Jogada::papel && jogador1->jogada == Jogada::pedra)){
            jogador1->derrotas = jogador1->derrotas + 1;
            jogador2->vitorias = jogador2->vitorias + 1;
           }
           else{
            jogador1->empates = jogador1->empates + 1;
            jogador2->empates = jogador1->empates +1;
           }
        }

        void rank(){
            cout << "Empates: "<< empates << endl;
            cout << "Derrotas: "  <<derrotas << endl;
            cout << "Vitorias: "<<vitorias << endl;
        }
};


int main(){
    Jogada tesoura = Jogada::tesoura;
    Jogada pedra = Jogada::pedra;
    Jogada papel = Jogada::papel;

    JogadorJokenpo *jogador1 = &JogadorJokenpo(0,0,0,"Renan",pedra);
    JogadorJokenpo *jogador2 = &JogadorJokenpo(0,0,0,"Renan",tesoura);

    jogador1->enfrentar(&jogador1, &jogador2);

    jogador1->jogar();
    jogador1->rank();

    return 0;
}