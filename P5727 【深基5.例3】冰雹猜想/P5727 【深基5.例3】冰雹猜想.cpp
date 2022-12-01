#include <stdio.h>

int main() {
	int a[10000];
	int N;
	int i = 1;
	scanf("%d", &N);
	a[0] = N;
	for (N; N != 1; N) {
		if (N % 2 == 0) {
			N /= 2;
			a[i] = N;
			i++;
		} else {
			N = N * 3 + 1;
			a[i] = N;
			i++;
		}
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%d ", a[j]);
	}
	return 0;
}