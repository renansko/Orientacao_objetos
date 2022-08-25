#include <iostream>

using namespace std;

int main()
{
    float vetor1[10];
    float vetor2[10];
    int i;

    for(i = 0; i<10 ; i++){
        cout << "Informe o " << i + 1 << " valor do vetor:" ;
        cin >> vetor1[i];
        vetor2[i] = vetor1[i] * 3;
    }

    cout << "Novo vetor: " << endl;
    for(i = 0; i < 10; i++)
    {
        cout << "Vetor[" << i + 1 << "] = " << vetor2[i] << endl;
    }

    return 0;
}