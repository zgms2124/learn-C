#include <stdio.h>

int main() {
	int n;
	int x, y;
	scanf("%d", &n);

	int a[10001], b[10001], c[10001], d[10001];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	}
	int x2, y2, ans = -1;
	scanf("%d %d", &x, &y);
	for (int i = n - 1; i >= 0; i--) {
		if (x >= a[i] && x <= (c[i] + a[i]) && y >= b[i] && y <= (d[i] + b[i])) {
			ans = i + 1;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}