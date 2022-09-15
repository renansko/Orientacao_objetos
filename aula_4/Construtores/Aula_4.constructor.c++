#include <iostream>

using namespace std;

class  Construtor{
public:
    int x,  y;

    Construtor(){
        x = 10;
        y = 20;
    } 
};


int main(){
    Construtor  c;
    cout << "x = " << c.x << endl;
    cout << "y = " << c.y << endl;
    
    return 0;
}