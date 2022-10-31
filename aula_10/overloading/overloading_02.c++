#include <iostream>
#include <cmath>

using namespace std;

class myVector{
    public:
        int x, y;

        myVector(){}

        myVector(int a, int b){
            x = a;
            y = b;
        }

        ~myVector(){}

        bool operator>(myVector v){
            float d1, d2;
            d1 = sqrt((x * x) + (y  * y));
            d2 = sqrt((v.x * v.x) + (v.y * v.y));
            if(d1 > d2){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    myVector v1(9,90);
    myVector v2(1,1);

    if(v1 > v2){
        cout << "O vetor (" << v1.x << "," << v1.y << ") eh maior que o vetor -> ("  << v2.x << "," << v2.y << ")" << endl;
    }
    else{
        cout << "O vetor (" << v1.x << "," << v1.y << ") eh menor que o vetor -> ("  << v2.x << "," << v2.y << ")" << endl;
    }
    return 0;
}