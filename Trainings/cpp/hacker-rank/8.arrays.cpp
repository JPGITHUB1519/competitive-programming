#include <iostream>

using namespace std;

int main() {
	int n;
	int *numeros_array = NULL;
	cin >> n;
	numeros_array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numeros_array[i];
	} 

	for (int i = n - 1; i >= 0; i--) {
		cout << numeros_array[i] << " ";
	}

	delete [] numeros_array;
	numeros_array = NULL;

	return 0;
}