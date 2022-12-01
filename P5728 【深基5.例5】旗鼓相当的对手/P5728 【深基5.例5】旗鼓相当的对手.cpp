#include <stdio.h>
#include <math.h>

int main() {
	int N;
	int t = 0;
	scanf("%d", &N);
	int a[N], b[N], c[N];
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (abs(a[i] + b[i] + c[i] - a[j] - b[j] - c[j]) <= 10 && abs(a[i] - a[j]) <= 5 && abs(b[i] - b[j]) <= 5
			        && abs(c[i] - c[j]) <= 5)
				t++;
		}
	}
	printf("%d", t);
	return 0;
}