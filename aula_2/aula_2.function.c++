#include<iostream>
#include<string>

using namespace std;

int leituraPrato(){
    int p;
    cout << "OPCOES DE PRATOS PRINCIPAIS:" << endl;
    cout << "1. Vegetariano - 180 cal" << endl;
    cout << "2. Peixe - 230 cal" << endl;
    cout << "3. Frango - 250 cal" << endl;
    cout << "Carne - 350 cal" << endl;
    cout << "Qual eh sua escolha de prato principal?";
    cin >> p;
    return p;
}

int leituraSobremesa(){
    int s;
    cout << "OPCOES DE SOBREMESAS:" << endl;
    cout << "1. Abacaxi - 75 cal" << endl;
    cout << "2. Sorvete diet - 110 cal" << endl;
    cout << "3. Mousse diet - 170 cal" << endl;
    cout << "4. Mousse de chocolate - 200 cal" << endl;
    cout << "Qual e a sua escolha de sobremesa? ";
    cin >> s;
    return s;
}

int leituraBebida(){
    int b;
    cout << "OPCOES DE SOBREMESAS:" << endl;
    cout << "1. Chá - 20 cal" << endl;
    cout << "2. Suco de laranja - 70 cal" << endl;
    cout << "3. Suco de melao - 100 cal" << endl;
    cout << "4. Refrigerante diet - 65 cal" << endl;
    cout << "Qual e a sua escolha de sobremesa? ";
    cin >> b;
    return b;
}

int caloria(int p, int s, int b)
{
    int totalCalorias = 0;

    if(p == 1)
    {
        totalCalorias = totalCalorias + 180;
    }
    if(p == 2){
        totalCalorias = totalCalorias + 230;
    }
    if(p == 3){
        totalCalorias = totalCalorias + 250;
    }
    if(p == 4){
        totalCalorias = totalCalorias + 350;
    }
    else{
        cout << "essa de prato nao existe" << endl;
    }

      if(s == 1)
    {
        totalCalorias = totalCalorias + 75;
    }
    if(s == 2){
        totalCalorias = totalCalorias + 110;
    }
    if(s == 3){
        totalCalorias = totalCalorias + 170;
    }
    if(s == 4){
        totalCalorias = totalCalorias + 200;
    }
    else{
        cout << "essa opcao de sobremesa nao existe" << endl;
    }

    if(b == 1)
    {
        totalCalorias = totalCalorias + 20;
    }
    if(b == 2){
        totalCalorias = totalCalorias + 70;
    }
    if(b == 3){
        totalCalorias = totalCalorias + 100;
    }
    if(b == 4){
        totalCalorias = totalCalorias + 65;
    }
    else{
        cout << "essa opcao de bebida nao existe" << endl;
    }

    return totalCalorias;
}

int main()
{
    int prato;
    int sobremesa;
    int bebida;

    int total;

    prato = leituraPrato();
    sobremesa = leituraSobremesa();
    bebida = leituraBebida();
    
    total = caloria(prato, sobremesa, bebida);

    cout << "O total de calorias sonsumidas foi de "<< total << "Kcal." << endl;
    return 0;

}