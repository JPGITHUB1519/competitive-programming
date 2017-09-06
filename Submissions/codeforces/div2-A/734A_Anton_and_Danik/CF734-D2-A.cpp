#include <iostream>

using namespace std;

int main() {
    int cont_anton = 0;
    int cont_danik = 0;
    int n_games;
    string s;
    cin >> n_games;
    cin >> s;
    for (int i = 0; i < n_games; i++) {
        if (s[i] == 'A') cont_anton++;
        else cont_danik++;
    }

    if (cont_anton > cont_danik) cout << "Anton" << endl;
    else if(cont_danik > cont_anton) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    
    return 0;
}