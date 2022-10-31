
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T>

class Exemplo{
    private:
        T produto;
        static int indice;
        string nome;

    public:
        Exemplo();
        T& getProduto();
        void setProduto(const T &p);
        void imprimeNomeObjeto();

};

template <class T>
int Exemplo<T>::indice = 0;

template <class T>
Exemplo<T>::Exemplo(){
    indice  = indice + 1;
    nome    = "Objeto ";
    std::ostringstream ostr;
    ostr    << indice;
    nome    = nome + ostr.str();
}

template <class T>
T& Exemplo<T>::getProduto(){
    return produto;
}

template <class T>
void Exemplo<T>::setProduto(const T &p){
    produto = p;
}

template<class T>
void Exemplo<T>::imprimeNomeObjeto(){
    cout << "Consultando o nome" << nome << endl;
}