#include <iostream>
#include <string>

using namespace std;

template <typename Algo>

Algo compara(Algo valor1, Algo valor2, Algo valor3){
    Algo max = valor1;

    if(valor2 > max){
        max = valor2;
    }
    if(valor3 > max){
        max = valor3;
    }
    return max;
}

int main(){

    string nome1,nome2,nome3;

    nome1 = "Felisberto";
    nome2 = "Winston";
    nome3 = "Zebra";


    cout << "O maior valor de int e: " << compara(4,-8,26) << endl;

    cout << "O maior valor de double e: " << compara(4.2,-8.1,26.76) << endl;

    cout << "O maior valor de string e: " << compara(nome1, nome2, nome3) << endl;

    return 0;
}