#include <stdio.h>

int main() {
	float a, b, x, y;
	scanf("%f %f %f %f", &x, &a, &y, &b);
	printf("%.2f", (b * y - a * x) / (b - a));
	return 0;
}