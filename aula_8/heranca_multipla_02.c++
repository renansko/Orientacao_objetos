#include <iostream>
#include <string>

using namespace std;

class Servidor{
    private:
        string nome;
        int idade;
    public:
        Servidor(){};
        Servidor(string nome, int idade):
        nome(nome), idade(idade){

        };

        ~Servidor(){}

        void mostraServidor(){
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << endl;
        }
};

class Professor: public Servidor{
    private:
        double salario;

    public:
        Professor(){};

        Professor(string nome, int idade, double salario):
        Servidor(nome, idade),
        salario(salario){

        };

        ~Professor(){};

        void mostraProfessor(){
            mostraServidor();
            cout << "Salario: " << salario << endl;
        }
};

class Pesquisador: public Professor{
    private:
        string pesquisa;
    public:
        Pesquisador(){}

        Pesquisador(string nome, int idade, double salario, string pesquisa):
        Professor(nome, idade , salario),
        pesquisa(pesquisa){

        }

        ~Pesquisador(){};

        void mostraPesquisador(){
            mostraProfessor();
            cout << "Titulo da pesquisa" << pesquisa << endl;
        }
};

int main(){

    Professor p1 = Professor("Neusa Grando", 25 , 10000.00);

    Pesquisador pea1 = Pesquisador("Guilherme patriota", 30 , 12000.00, "Estrutura de Dados Aplicada na POO");

    p1.mostraProfessor();
    cout << endl;
    pea1.mostraPesquisador();


return 0;
}