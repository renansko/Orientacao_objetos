#include <iostream>

using namespace std;

double add(double a, double b){
    return(a + b);
}

int main(){
    //Double
    cout << "Soma (Double): " << add(5.4, 3.8) << endl;
    
    
    cout << "Soma (int): " << add(5, 3) << endl;

    return 0;
}