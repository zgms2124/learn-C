#include <stdio.h>

int main() {
	int m, n, x, y;
	int sum = 0;
	scanf("%d %d", &m, &n);
	while (m  < n) {
		sum = sum + m;
		m++;
	};
	printf("%d\n", sum);
	return 0;
}