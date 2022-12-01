#include <stdio.h>

int main() {
	long long n;
	while (scanf("%lld", &n) != EOF) {
		long long a = 1;
		long long b = 2;
		if (n == 1) {
			printf("1\n");
			continue;
		}
		if (n == 2) {
			printf("2\n");
			continue;
		}
		int s = 0;
		for (int i = 3; i <= 91; i++) {
			a = a + b;
			a = a + b;
			b = a - b;
			a = a - b;
			if (n == b) {
				printf("%d\n", i);
				s = 1;
				break;
			}
		}
		if (s == 0)
			printf("0\n");
	}
	return 0;
}