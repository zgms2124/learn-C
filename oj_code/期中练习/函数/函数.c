#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n < 1) {
			printf("%d\n", n * n);
		} else if (n < 10) {
			printf("%d\n", 2 * n - 1);
		} else
			printf("%d\n", 3 * n - 12);
	}
	return 0;
}