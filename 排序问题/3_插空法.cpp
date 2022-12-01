#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int a[N];
	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N - 1; i++) {
		for (j = i + 1; j > 0; j--) {
			if (a[j] < a[j - 1]) {
				a[j] = a[j] + a[j - 1];
				a[j - 1] = a[j] - a[j - 1];
				a[j] = a[j] - a[j - 1];
			} else
				break;// 优化速度
		}
	}
	for (i = 0; i < N; i++)
		printf("%d", a[i]);
	return 0;
}