#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				printf("%d\n", n / i);
				break;
			}
		}
	}
	return 0;
}