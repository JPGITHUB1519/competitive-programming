#include <iostream>

using namespace std;

int main() {
    int p, v, t, resp = 0, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if ((p + v + t) >= 2) {
            resp++;
        }
    }

    cout << resp << endl;

}