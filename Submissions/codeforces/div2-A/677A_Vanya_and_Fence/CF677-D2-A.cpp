#include <iostream>

using namespace std;

int main()
{
    int n, h, ai, road_width = 0;
    cin >> n >> h;
    for(int i = 0; i < n; i++)
    {
        cin >> ai;
        if(ai > h) road_width = road_width + 2;
        else road_width = road_width + 1;
    }
    cout << road_width << endl;
    return 0;
}