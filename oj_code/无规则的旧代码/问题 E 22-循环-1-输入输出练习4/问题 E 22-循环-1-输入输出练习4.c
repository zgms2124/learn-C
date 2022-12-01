#include <stdio.h>

int main() {
	int n, t;
	while (1) {
		scanf("%d", &n);
		int sum = 0;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%d", &t);
			sum += t;
		}
		printf("%d\n", sum);
	}
	return 0;
}