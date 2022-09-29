#include <iostream>
#include<string>

using namespace std;

int main()
{
    int correto = 10000;
    int e, i;

    while(i != 1)
    {
        cout << "Quantos espartanos voce acha que sao?" << endl;
        cin >> e;

        if(e == correto){
            cout << "voce acertou" << endl;
            i = 1;
        }else{
            if(e > correto){
                cout << "um pouco menos..." << endl;
            }else{
                cout << "um pouco mais..." << endl;
            }
        }
    }

    return 0;
}