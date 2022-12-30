#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a, sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a);
			sum += a;
		}
		if (n % 2 == 0 || sum % 2 == 0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}