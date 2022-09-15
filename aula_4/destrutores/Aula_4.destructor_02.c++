#include <iostream>

using namespace std;

int cp = 0;

class Bank{
public:
    ~Bank(){
        cp = 1;
    };
};

int main(){
    Bank *b;
    b = new Bank;

    delete b;

    cout << "Check point = " << cp << endl;

    return 0;
}