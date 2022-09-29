#include <iostream>
#include <string>

using namespace std;


enum class Modalidades{
    graduacao,
    mestrado,
    doutorado

};


class Curso{
    public:
        string nome;
        float mensalidade;
        Modalidades mods;

    Curso(string nome, float mensalidade, Modalidades modalidade):
        nome(nome), mensalidade(mensalidade), modalidade(modalidade){
        }
    
    ~Curso(){

    }


    void descreverCurso(){
        cout << "Nome do curso: " << nome << endl;
        cout << "Mensalidade do ser: " << mensalidade << endl;
        
        if(mods == Modalidades::graduacao){
        cout << "muleque vez graduacao " << endl;
        }
        
        else if(mods == Modalidades::mestrado){
        cout << "muleque vez mestrado" << endl;
        }
        
        else if(mods == Modalidades::doutorado){
        cout << "muleque vez doutorado " << endl;
        }
    }
};


class Aluno{
    public:
    string nome;
    int matricula;
    float desconto;
    Curso *curso;

    Aluno(string nome, int matricula, float desconto, Curso curso):
        nome(nome), matricula(matricula), desconto(desconto), curso(curso){

        }

    ~Aluno(){
        
    }

    void pagamento(Curso *curso){
        cout << "O valor pago com desconto eh: " << curso -> mensalidade*(1-desconto) endl;
    }

    void descreverAluno(){
        cout << "Nome do cantango: " << nome << endl;
        cout << "matricula Nº: " << matricula << endl;
        cout << "desconto " << desconto << endl;
        cout << "Cursando: " << curso.nome << endl;
        curso -> descreverCurso();
    }

};

int main(){
    Modalidades grad = Modalidades::graduacao;
    Curso engenharia;
    Aluno jorge;

    engenharia.nome = "engenharia da computacao";
    engenharia.mensalidade = 1100;
    engenharia.mods = grad;

    jorge.nome = "jorge";
    jorge.matricula = 2;
    jorge.desconto = 10;
    jorge.curso = engenharia;

    jorge.pagamento();

    return 0;
}