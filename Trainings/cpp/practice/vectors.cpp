#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
		cout << vec[i] << endl;
	}
	return 0;
}