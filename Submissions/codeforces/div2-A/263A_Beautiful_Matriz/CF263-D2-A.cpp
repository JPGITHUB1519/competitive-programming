#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m[5][5];
    int pos[2];
    int steps = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if(m[i][j] == 1)
            {
                pos[0] = i;
                pos[1] = j;
            }
        }
    }
    steps = abs(pos[0] - 2) + abs(pos[1] - 2);
    cout << steps; 
    return 0;
}