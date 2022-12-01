#include <stdio.h>

int main() {
	int n, m, sum, x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		sum = 0;
		for (int j = 0; j < m; j++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d", sum);
		if (i < n - 1)
			printf("\n\n");
	}
	return 0;
}