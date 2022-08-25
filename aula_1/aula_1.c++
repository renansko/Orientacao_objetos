#include <iostream>
#include <string>

using namespace std;

int main()
{
    double salario_min, salario_pro;

    cout << "O salario minimo eh.";
    cin >> salario_min;
    cout << "Qual é o seu salario?. \n";
    cin >> salario_pro;

    cout << "voce recebe: " << salario_pro / salario_min;

    return 0;
}