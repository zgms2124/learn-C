#include <stdio.h>

int main() {
	int N, s;
	scanf("%d", &N);
	int a[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	int b[N];
	int c[N];
	int t = 0;
	c[0] = a[0];
	for (int i = 0; i < N; i++) {
		b[i] = 0;
	}
	b[0] = 1;
	for (int i = 1; i < N; i++) {
		if (a[i] != a[i - 1]) {
			t++;
			c[t] = a[i];
			b[t] = 1;
		} else
			b[t]++;
	}
	int max = b[0], z = 0;;
	for (int i = 1; i < N; i++) {
		if (max < b[i]) {
			max = b[i];
			z = i;
		}
	}
	printf("%d %d", c[z], b[z]);
	return 0;
}