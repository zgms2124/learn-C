#include <stdio.h>

int main() {
	int n, m;
	int x = 0;
	scanf("%d %d", &n, &m);
	int t = n - m + 1;
	int a[t];
	int b[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < t; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < t; i++) {
		x = 0;
		for (int j = i; x < m; x++, j++) {
			a[i] += b[j];
		}
	}
	int min = a[0];
	for (int i = 0; i < t; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("%d", min);
	return 0;
}