#include <stdio.h>

int main() {
	int a[10];
	int x, t;
	for (int i = 0; i < 10; i++) {
		a[i] = 0;
	}
	int M, N;
	scanf("%d %d", &M, &N);
	for (M; M <= N; M++) {
		x = M;
		while (x > 0) {
			t = x % 10;
			a[t]++;
			x /= 10;
		}
	}
	for (int i = 0; i < 9; i++) {
		printf("%d ", a[i]);
	}
	printf("%d", a[9]);
	return 0;
}