#include <iostream>
#include "templates.h"

using namespace std;

int main(){
    Exemplo<int> teste1;
    Exemplo<char*> teste2;
    Exemplo<char*> teste3;

    teste1.imprimeNomeObjeto();
    teste2.imprimeNomeObjeto();
    teste3.imprimeNomeObjeto();


    teste2.setProduto("Abacaxi");
    teste3.setProduto("Limao");

    cout << "Teste 2: " << teste2.getProduto() << endl;
    cout << "Teste 3: " << teste3.getProduto() << endl;

    teste2.setProduto("Laranja");
    cout << "Teste 2 agora e: " << teste2.getProduto() << endl;
    return 0;
}