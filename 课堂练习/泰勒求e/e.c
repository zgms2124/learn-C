#include <stdio.h>

int main() {
	double x = 1;
	double y = 1;
	long int  a;
	for (int i = 1; y >= 0.000001; i++) {
		a = 1;
		for (int j = 1; j <= i; j++) {
			a = j * a;
		}
		y = 1.0 / a;
		x += y;
	}
	printf("%.17f", x);
	return 0;
}