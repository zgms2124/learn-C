#include <stdio.h>

int main() {
	int a, n;
	int ans = 0;
	int t = 0;
	scanf("%d %d", &a, &n);
	for (int i = 0; i < n; i++) {
		t = t * 10 + 2;
		ans += t;
	}
	printf("%d", ans);
}