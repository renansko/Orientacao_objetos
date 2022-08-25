#include<iostream>

using namespace std;

int main()
{
    float total = 0;
    float i;

    for(i = 1; i <= 20; i++)
    {
        total = total + (1/i);
    }
    cout << "O total  " << total << endl;
    return 0;
}