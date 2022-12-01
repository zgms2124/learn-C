#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 2; i * i <= n; i++) {
			if (i % 2 == 0)
				printf("%d\n", i * i);
			else
				continue;
		}
	}
	return 0;
}