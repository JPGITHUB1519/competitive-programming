#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, a4, total = 0;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        switch(s[i])
        {
            case '1' :
                total += a1;
                break;
            case '2':
                total += a2;
                break;
            case '3':
                total += a3;
                break;
            case '4' :
                total += a4;
                break;
        } 
    }
    cout << total << endl;
    
    return 0;
}