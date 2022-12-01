#include <stdio.h>

int main() {
	int a, b, c, max;
	int x[6];
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		x[0] = a + b + c;
		x[1] = a * b * c;
		x[2] = (a + b) * c;
		x[3] = a * (b + c);
		x[4] = a * b + c;
		x[5] = a + b * c;
		max = x[0];
		for (int i = 1; i < 6; i++) {
			if (x[i] > max) {
				max = x[i];
			}
		}
		printf("%d\n", max);
	}
	return 0;
}