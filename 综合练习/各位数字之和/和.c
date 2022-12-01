#include <stdio.h>

int main() {
	long long a;
	int ans;
	while (scanf("%lld", &a) != EOF) {
		ans = 0;
		while (a > 0) {
			ans = ans + a % 10;
			a /= 10;
		}
		printf("%d\n", ans);
	}
	return 0;
}