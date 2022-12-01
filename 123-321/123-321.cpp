#include <stdio.h>

int main() {
	int a, b;
	while (scanf("%d", &a) != EOF) {
		b = a % 10 * 100 + (a - a / 100 * 100 - a % 10) + a / 100 ;
		printf("%d\n", b);
	}
	return 0;
}