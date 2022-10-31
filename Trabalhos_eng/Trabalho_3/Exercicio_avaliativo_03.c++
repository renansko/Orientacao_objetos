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
    void descrevePessoas(){
        cout << "informacoes pessoais: " << endl;
        cout << " nome : " << nome << endl;
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
    Disciplina(string nome,Pessoas professor, vector<Pessoas> aluno, vector<Recurso> recursos ):
        nome(nome), professor(professor), aluno(aluno), recursos(recursos){
    }
    ~Disciplina(){};
    void descreveDisciplina(){
        cout << "Voce esta na disciplina: " << nome << endl;
        cout << "------------------- " << endl;
        cout << "-Professor vigente- " << endl;
        professor.descrevePessoas();
        cout << "-Professor vigente- " << endl;
        for(int i = 0; i < aluno.size(); i++){
            cout << "aluno numero: " << i+1  << endl;
            aluno[i].descrevePessoas();
        }
        for(int i = 0; i < recursos.size(); i++){
            recursos[i].descreveRecurso();
        }
    }
};



int main(){

    Pessoas jorge("jorge","(41) 99908-5464", "jorgealaba@gmail.com");
    Pessoas alberto("Alberto","(41) 97548-5464", "Alberto@gmail.com");
    Pessoas renan("Renan","(41) 99908-7788", "Renan@gmail.com");


    Recurso livro("livro", 1);
    Recurso computador("Computador", 0);

    vector<Pessoas> alunos;
    vector<Recurso> recursos;

    alunos.push_back(alberto);
    alunos.push_back(renan);
    recursos.push_back(computador);
    recursos.push_back(livro);

    Disciplina arquitetura("arquitetura", jorge, alunos, recursos);
    arquitetura.descreveDisciplina();
    return 0;
}