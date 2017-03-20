#include <iostream>

using namespace std;

int main()
{
    int n, petya = 0, vasha = 0, tonya = 0, cant_subs = 0;
    cin >> n;
    while(cin >> petya >> vasha >> tonya)
    {
        if(petya + vasha + tonya > 1) cant_subs++;
    }       
    cout << cant_subs << endl;
    return 0;
}