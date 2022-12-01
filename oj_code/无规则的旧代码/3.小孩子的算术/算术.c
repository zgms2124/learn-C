#include <stdio.h>

int main() {
	int N, a, b, c;
	int m = 0, n = 0;
	scanf("%d", &N);
	while (m < N) {
		scanf("%d %d", &a, &b);
		a = a - a / 100 * 100;
		b = b - b / 100 * 100;
		c = a + b;
		c = c - c / 100 * 100;
		printf("%d\n", c);
		m++;
	}
	return 0;
}