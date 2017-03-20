#include <iostream>

using namespace std;

int main()
{
    int n,anton = 0, danik = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A') anton = anton + 1;
        if(s[i] == 'D') danik = danik + 1;
    }
    if(anton == danik) cout << "Friendship" << endl;
    else if (anton > danik) cout << "Anton" << endl;
    else cout << "Danik" << endl;
    return 0;
}