/* Altere o exercício 6 substituindo o atributo "Animal pet" por um vetor de "Animal pet". Após, modifique o código a fim de permitir a representação de um
   cliente que possui diversos pets.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal{
public:
    string nome;
    string especie;
    int idade;

    Animal(){
        nome = "Indefinido";
        especie = "Indefinido";
        idade = 0;
    }

    Animal(string nome, string especie, int idade):
        nome(nome), especie(especie), idade(idade){
    }

    ~Animal(){
    }

    void infomacoes_animal(){
        cout << "Nome do pet: " << nome << endl;
        cout << "Especie do pet: " << especie << endl;
        cout << "Idade do pet: " << idade << endl;
    }
};

class Cliente{
public:
    string nome;
    string cpf;
    string endereco;
    vector<Animal> listaPets;

    Cliente(){
    }

    Cliente(string nome, string cpf, string endereco):
        nome(nome), cpf(cpf), endereco(endereco){
    }

    ~Cliente(){
    }

    void informacoes_cliente(){
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Endereco: " << endereco << endl;
        for(int i = 0; i < listaPets.size(); i++){
            listaPets[i].infomacoes_animal();
        }
    }
};

int main(){
    Cliente cliente("Neusa Grando", "01234567890", "Av. Visconde de Guarapuava, 2764");
    cliente.listaPets.push_back(Animal("Lolo", "Gato", 15));
    cliente.listaPets.push_back(Animal("Manuki", "Cachorro", 9));
    cliente.listaPets.push_back(Animal("Frida", "Cobra", 12));
    cliente.informacoes_cliente();

    return 0;
}
