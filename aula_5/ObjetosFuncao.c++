
/*
Um objeto pode ser passado para uma função de duas formas:
 
 º  Por valor;
 
 º  Por referência - Utilizado quando é necessário mudar o 
    valor de uma variável (membro).

Da mesma forma, as funções também pode retornar objetos.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Mensagem{
    public:
        char autor[50];
        char mensagem[50];

        Mensagem(char *a, char *m){
            strcpy(autor, a);
            strcpy(mensagem, m);
        }

        ~Mensagem(){

        }

        void MostraMensagem(){
            cout << "Usuário: " << autor << endl;
            cout << "Mensagem: " << mensagem << endl;
        }
};

void ApoioUsuario(Mensagem msg){
    msg.MostraMensagem();
}

void RespostaCurso(Mensagem *msg){
    strcpy(msg->mensagem, "Curso lotado! " );
    msg->MostraMensagem();
}

int main(){
    Mensagem usuario("Neusa", "Inscrição no curso de C++");
    
    ApoioUsuario(usuario);
    RespostaCurso(&usuario);

    return 0;
}
