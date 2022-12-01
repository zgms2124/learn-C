#include <stdio.h>

int main() {
	int a, b, c, max;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		max = (a > b) ? a : b;
		max = (max > c) ? max : c;
		printf("%d", max);
		a = b = c = max = 0;
	}
	return 0;
}