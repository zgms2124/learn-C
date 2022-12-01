#include <stdio.h>

int main() {
	int n, x, ans;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			ans = 1;
			scanf("%d", &x);
			if (x <= 2) {
			} else {
				for (int i = 2; i * i <= x; i++) {
					if (x % i == 0) {
						ans += i;
						if (i * i != x) {
							ans += x / i;
						}
					}
				}
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}