#include <iostream>
#include <string>

using namespace std;

class Livro{
    private:
        string titulo;
        string autor;
        int edicao;
    public:
    Livro(){}
    
    Livro(string titulo, string autor, int edicao):
        titulo(titulo), autor(autor), edicao(edicao){
        }
    
    ~Livro(){}

    MostraLivro(){
        cout << "Informacoes do livro:" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor:" << autor << endl;
        cout << "Numero da edicao: " << edicao << endl;

    }
};

class Disco{
    private:
        double espaco;
    public:
        Disco(){}

        Disco(double espaco):
        espaco(espaco){

        }

        ~Disco(){}

        void MostraDisco(){
            cout << "Informacoes do disco" << endl;
            cout << "Espaco" << espaco << endl;
        }
};

class Pacote: public Livro, public Disco{
    private:
        double preco;
    public:
        Pacote(){}

        Pacote(string titulo, string autor, int edicao, double espaco, double preco):
        Livro(titulo,autor,edicao),
        Disco(espaco),
        preco(preco){

        }

        ~Pacote(){}

        void mostraPacote(){
            MostraLivro();
            MostraDisco();
            cout << "Preco: " << preco << endl; 
        }   
};

int main(){

    Pacote p1 = Pacote("C++", "Mario", 2, 7.9, 499.90);
    Pacote p2 = Pacote("Estrutura de Dados", "Patriota", 2, 7.9, 250.49);
  
    p1.mostraPacote();
    cout << endl;
    p2.mostraPacote();
    return 0;
}