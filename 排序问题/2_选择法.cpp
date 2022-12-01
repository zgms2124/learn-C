#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int a[N];
	int i;
	int min;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N; i++) {
		for (int j = 1 + i; j < N; j++) {
			if (a[i] > a[j]) {
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d", a[i]);
	}
	return 0;
}