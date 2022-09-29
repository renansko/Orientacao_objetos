#include <iostream>
#include <string>

using namespace std;

int main(){
    enum Estacoes: unsigned char{
        verao,
        outono,
        inverno,
        primavera
    };

    Estacoes e = verao;

    string mensagem;

    if(e == verao){
        mensagem = "Use filtro solar!";
    }
    else{
        if(e == inverno){
            mensagem = "Nao esqueca da japona";
        }
        else{
            if(e == outono){
                mensagem = "Observe as folhas caindo! ";
            }
            else{
                if(e == primavera){
                    mensagem = "Observe as flores!";
                }
            }
        }
    }

    cout << mensagem << endl;

    return 0;
}