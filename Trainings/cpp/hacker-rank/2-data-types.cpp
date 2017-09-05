#include <iostream>

using namespace std;

int main() {
	// scanf and printf is faster than cout and cin
	int v1;
	long v2;
	char v3;
	float v4;
	double v5;
	scanf("%d %ld %c %f %lf", &v1, &v2, &v3, &v4, &v5);
	printf("%d \n", v1);
	printf("%ld \n", v2);
	printf("%c \n", v3);
	printf("%f \n", v4);
	printf("%lf \n", v5);
	return 0;
}