#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i;
    float centimentros; 

    for(i = 1; i <= 20; i++)
    {
        centimentros = i * 2.54;
        cout << i << "polegada (s) =" << centimentros << " cm" << endl;
        i++;
    }

    return 0;
}