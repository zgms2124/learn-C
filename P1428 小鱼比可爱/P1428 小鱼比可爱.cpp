#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int a[N];
	int b[N];
	for (int i = 0; i < N; i++) {
		b[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		for (int j = i - 1; j >= 0; j--) {
			if (a[i] > a[j]) {
				b[i]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}