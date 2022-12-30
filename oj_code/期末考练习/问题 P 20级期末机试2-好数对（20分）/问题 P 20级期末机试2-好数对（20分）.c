#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if ((i * j) % (i + j) == 0)
					ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}