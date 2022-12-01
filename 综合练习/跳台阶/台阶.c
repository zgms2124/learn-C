#include <stdio.h>

int main() {
	int n, m, num, fib;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			num = 1;
			scanf("%d", &m);
			if (m == 2)
				num = 2;
			if (m >= 3) {
				for (int i = 0; i < m - 1; i++) {
					num = num * 2;
				}
			}
			printf("%d\n", num);
		}
	}
	return 0;
}

