#include <iostream>

using namespace std;

class  PontoCartesiano{
public:
    double x, y;

    PontoCartesiano(double xis, double ipslon){
        x = xis;
        y = ipslon;
    }

};

int main(){
    PontoCartesiano p = PontoCartesiano(12.94, 9.57);

    cout << "x = " << p.x << endl;
    cout << "y = " << p.y << endl;
  
    return 0;
}