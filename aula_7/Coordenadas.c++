#include <iostream>
#include <string>

using namespace std;

class Ponto2D{
private:
    double px;
    double py;
public:
    Ponto2D(double x, double y){
        px = x;
        py = y;
    }

    ~Ponto2D(){
    }

    double coordenadaX(){
        return px;
    }

    double coordenadaY(){
        return py;
    }
};

class Ponto3D: public Ponto2D{
    private:
        double pz;
    public:
        Ponto3D(double x, double y, double z): Ponto2D(x,y){
            pz = z;
        }

        ~Ponto3D(){

        }

        double coordenadaZ(){
            return pz;
        }
};

int main(){
    double x,y,z;


    cout << "Coordenadas de um ponto 3D: "<< endl;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << "Z = ";
    cin >> z;

    Ponto3D *p = new Ponto3D(x,y,z);


    cout << "(" << p->coordenadaX() << ", " << p->coordenadaY() << ", " << p->coordenadaZ() << ")" << endl;


return 0;

}