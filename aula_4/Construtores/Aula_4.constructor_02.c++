#include <iostream>

using namespace std;

class  PontoCartesiano{
public:
    int x,  y;

    PontoCartesiano(int ponto1, int ponto2){
        x = ponto1;
        y = ponto2;
    } 

    int getX(){
        return  x;
    }

    int getY(){
        return  y;
    }
};



int main(){
    // Chamada implicita
    PontoCartesiano p1(10, 20);

    // Chamada explicita
    PontoCartesiano p2 = PontoCartesiano(15, 25);

    cout << "Instancia 1: x = " << p1.x << endl;
    cout << "Instancia 1: y = " << p1.y << endl;

    cout << "Instancia 2: x = " << p2.x << endl;
    cout << "Instancia 2: y = " << p2.y << endl;

    // Utilizando o getY
    cout << "Instancia 1: x = " << p1.getX() << endl;
    cout << "Instancia 1: y = " << p1.getY() << endl;

    cout << "Instancia 2: x = " << p2.getX() << endl;
    cout << "Instancia 2: y = " << p2.getY() << endl;

    return 0;
}