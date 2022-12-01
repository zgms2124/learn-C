#include <stdio.h>

int main() {
	long long n, ans, i;
	while (scanf("%lld", &n) != EOF) {
		ans = 1;
		if (n >= 2009) {
			ans = 0;
		} else {
			for (i = n; i > 1; i--) {
				ans *= i;
				if (ans >= 2009) {
					ans = ans % 2009;
				}
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}