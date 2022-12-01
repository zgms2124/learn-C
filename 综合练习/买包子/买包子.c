#include <stdio.h>

int main() {
	int n, m1, m2, a, b, c, d, e, f;
	while (	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
		m1 = a * 100 + b * 10 + c;
		m2 = d * 100 + e * 10 + f;
		n = m1 / m2;
		printf("%d\n", n);
	}
	return 0;
}