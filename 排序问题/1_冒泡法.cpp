#include <stdio.h>

int main() {
	int N, len;
	scanf("%d", &N);
	int i;
	int a[N];
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	int x = a[N];
	for (i = 0; len = N, i <= len - 1; i++) {
		for (int j = 0; j <= len - 2 - i; j++) {
			if (a[j] > a[j + 1]) {
				a[j] = a[j] + a[j + 1];
				a[j + 1] = a[j] - a[j + 1];
				a[j] = a[j] - a[j + 1];
			}
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
}