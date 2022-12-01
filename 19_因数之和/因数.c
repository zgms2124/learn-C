#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int ans = 0;
	int a[20];
	for (int i = 1, k; i <= 1000; i++) {
		sum = 0;
		k = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
				a[k] = j;
				k++;
			}

		}
		if (sum == i) {
			printf("%d=%d", i, a[0]);
			for (int i = 1; i < k; i++) {
				printf("+%d", a[i]);
			}
			printf("\n");
		}
	}
	return 0;
}