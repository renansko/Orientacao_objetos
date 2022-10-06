#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Pessoas{
public:
    string nome;
    string telefone;
    string email;


    Pessoas(){};
    Pessoas(string nome,  string telefone, string email):
        nome(nome), telefone(telefone), email(email){
    }
    ~Pessoas(){};
    void descreveAluno(){
         
        cout << " Aluno : " << nome << endl;
        cout << " Telefone: " << telefone << endl;
        cout << " Email: " << email << endl;
        cout << "------------------- " << endl;
    }

    void descreveProfessor(){
       
        cout << " Professor : " << nome << endl;
        cout << " Telefone: " << telefone << endl;
        cout << " Email: " << email << endl;
        cout << "------------------- " << endl;
    }
};


class Recurso{
public:
    string nome;
    int necesidade;

    Recurso(){};
    Recurso(string nome,  int necesidade):
        nome(nome), necesidade(necesidade){
    }
    ~Recurso(){};
    void descreveRecurso(){
        if(necesidade == 1){
        cout << "vai ser necessario: " << nome << endl;
        }
        else{
        cout << "nao vai ser necessario: "<< nome << endl;
        }
    }
};

class Disciplina{
public:
    string nome;
    Pessoas professor;
    vector<Pessoas> aluno;
    vector<Recurso> recursos;


    Disciplina(){};
    Disciplina(string nome,Pessoas professor, string aluno);
    ~Disciplina(){};
    void descreveDisciplina(){
        cout << "Voce esta na disciplina: " << nome << endl;
        cout << "------------------- " << endl;
        professor.descreveProfessor();
        for(int i = 0; i < aluno.size(); i++){
            cout << "aluno numero: " << i+1  << endl;
            aluno[i].descreveAluno();
        }
        for(int i = 0; i < recursos.size(); i++){
            recursos[i].descreveRecurso();
        }
    }
};



int main(){

    Pessoas jorge;
    jorge.nome = "jorge";
    jorge.telefone = "(41) 99908-5464";
    jorge.email = "jorgealaba@gmail.com";


    Disciplina arquitetura;
    arquitetura.nome = "arquitetura";
    arquitetura.professor = jorge;
    arquitetura.aluno.push_back(Pessoas("Alberto", "(41) 97548-5464", "Albertoalaba@gmail.com"));
    arquitetura.aluno.push_back(Pessoas("Alberto", "(41) 97548-5464", "Albertoalaba@gmail.com"));
    arquitetura.recursos.push_back(Recurso("Livro", 1));
    arquitetura.recursos.push_back(Recurso("Computador", 0));

    arquitetura.descreveDisciplina();
    return 0;
}