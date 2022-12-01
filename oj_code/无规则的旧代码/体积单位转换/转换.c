#include <stdio.h>

int main() {
	float a;
	while (scanf("%f", &a) != EOF) {
		printf("%.3f\n", a * 0.5);
		printf("%.3f\n", a * 4);
		printf("%.3f\n", a * 8);
		printf("%.3f\n", a * 24);
	}
	return 0;
}