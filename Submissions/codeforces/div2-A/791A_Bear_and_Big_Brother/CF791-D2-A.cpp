#include <iostream>

using namespace std;

int main() {
	int a, b, years = 0;
	cin >> a;
	cin >> b;

	while(a <= b) {
		a = a * 3;
		b = b * 2;
		years++;
	}

	cout << years << endl;
	return 0;
}