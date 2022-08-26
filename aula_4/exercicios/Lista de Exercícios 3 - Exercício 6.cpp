/* Implemente uma classe Cliente que representa o cliente da clínica veterinária (exercício 5). Tal classe deve conter os seguintes atributos:
   - Nome;
   - CPF;
   - Endereço;
   - Pet, do tipo Animal.
   Após, implemente um método que mostre em tela todos os dados do cliente.
*/

#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    string nome;
    string especie;
    int idade;

    void informacoes(){
        cout << "Nome: " << nome << endl;
        cout << "Especie: " << especie << endl;
        cout << "Idade: " << idade << endl;
    }
};

class Cliente{
public:
    string nome;
    string cpf;
    string endereco;
    Animal pet;

    void informacoes_cliente(){
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Endereco: " << endereco << endl;
        cout << "Nome do pet: " << pet.nome << endl;
        cout << "Especie: " << pet.especie << endl;
        cout << "Idade: " << pet.idade << endl;
    }
};

int main(){
    Animal animal1;
    Animal animal2;
    Cliente cliente1;

    animal1.nome = "Lulu";
    animal1.especie = "Gato";
    animal1.idade = 12;
    animal1.informacoes();

    animal2.nome = "Manuki";
    animal2.especie = "Cachorro";
    animal2.idade = 8;
    animal2.informacoes();

    cliente1.nome = "Neusa Grando";
    cliente1.cpf = "123.456.789-07";
    cliente1.endereco = "Av. Visconde de Guarapuava, 2764";
    cliente1.pet.nome = "Manuki";
    cliente1.pet.especie = "Cachorro";
    cliente1.pet.idade = 8;
    cliente1.informacoes_cliente();

    return 0;
}
