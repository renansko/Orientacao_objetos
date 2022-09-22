/* Implemente uma classe Cliente que representa o cliente da cl�nica veterin�ria (exerc�cio 5). Tal classe deve conter os seguintes atributos:
   - Nome;
   - CPF;
   - Endere�o;
   - Pet, do tipo Animal.
   Ap�s, implemente um m�todo que mostre em tela todos os dados do cliente.
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

class Endereco {
public:
    string  Rua;
    int     numero;
    string  complemento;
    string  bairro;
    string  Cidade;
    string  Estado;
    int     CEP;

    Endereco(string loca, int num, string comp, string bar, string cit, string state, int Ceep){
    Rua = loca;
    numero = num;
    complemento = comp;
    bairro = bar;
    Cidade = cit;
    Estado = state;
    CEP = Ceep;
    }
};

class Cliente{
public:
    string nome;
    string cpf;
    string endereco;
    Animal pet[10];

    void informacoes_cliente(Endereco e){
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Nome do pet: " << pet[0].nome << endl;
        cout << "Especie: " << pet[0].especie << endl;
        cout << "Idade: " << pet[0].idade << endl;

        //endereço
        cout << "Rua: " << e.Rua << endl;
        cout << "Numero: " << e.numero << endl;
        cout << "Complemento: " << e.complemento << endl;
        cout << "Bairro: " << e.bairro << endl;
        cout << "Cidade: " << e.Cidade << endl;
        cout << "Estado: " << e.Estado << endl;
        cout << "CEP: " << e.CEP << endl;
    }
};

int main(){
    Animal animal1;
    Animal animal2;
    Endereco endereco_1("Av. Visconde de Guarapuava",891, "Predio bem grande" , "Sitio cercado" , "Curitiba", "Parana", 81900350);
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


    cliente1.pet[0].nome = "Manuki";
    cliente1.pet[0].especie = "Cachorro";
    cliente1.pet[0].idade = 8;
    cliente1.informacoes_cliente(endereco_1);

    return 0;
}
