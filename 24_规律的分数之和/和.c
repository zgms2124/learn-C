#include <stdio.h>

int main() {
	float a = 2, b = 1;
	float sum = a / b;
	for (int i = 1; i < 20; i++) {
		a = a + b;
		b = a - b;
		sum += (a / b);
	}
	printf("%.6f", sum);
	return 0;
}