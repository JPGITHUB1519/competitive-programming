#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Trick For Uva and SPOJ
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int cases;
    cin >> cases;
    for (int cc = 0; cc < cases; cc++)
    {
        long long x,y;
        cin >> x >> y;
        long long z = x + y;
        cout << x << '+' << y << '=' << z << "\n";
    }
}
