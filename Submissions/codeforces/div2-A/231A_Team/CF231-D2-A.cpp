#include <iostream>

using namespace std;

int main()
{
    int n, petya = 0, vasha = 0, tonya = 0;
    int cant_sure = 0, cant_subs = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> petya >> vasha >> tonya;
        if(petya == 1) cant_sure++;
        if(vasha == 1) cant_sure++;
        if(tonya == 1) cant_sure ++;
        if(cant_sure >= 2) cant_subs++;
        cant_sure = 0;
    }
    cout << cant_subs << endl;
    return 0;
}