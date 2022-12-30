#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		if (n % 2 != 0 && a[0] % 2 != 0 && a[n - 1] % 2 != 0) {
			printf("Yes\n");
		} else
			printf("No\n");
	}
	return 0;
}