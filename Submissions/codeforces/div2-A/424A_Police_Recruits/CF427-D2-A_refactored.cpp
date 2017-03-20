#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cant_hired = 0;
    int e;
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> e;
        if(e == -1)
        {
            if(cant_hired <= 0) res++; 
            else cant_hired--;
        }
        else cant_hired += e;
    }
    cout << res << endl;
    return 0;
}
