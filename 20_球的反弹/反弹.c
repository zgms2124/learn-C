#include <stdio.h>

int main() {
	double high = 50;
	double sum = 100;
	for (int i = 1; i < 10; i++, high /= 2.0) {
		sum += 2 * high;
	}
	printf("%f %f", sum, high);
	return 0;
}