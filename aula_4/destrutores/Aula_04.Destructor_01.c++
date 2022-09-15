#include <iostream>

using namespace std;

class Destrutor{
public:
    Destrutor(){
        cout << "Estou no construtor!"<< endl;
    }

    ~Destrutor(){
        cout << "Estou no destrutor!" << endl;
    }
};

int main(){
    Destrutor t;

    return 0;
}