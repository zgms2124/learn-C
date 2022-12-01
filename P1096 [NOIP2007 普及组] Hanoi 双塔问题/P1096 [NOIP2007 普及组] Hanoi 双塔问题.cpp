#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	long long int t = 1;
	for (int i = 0; i < N; i++) {
		t *= 2;
	}
	t = t - 1;
	printf("%llld", 2 * t);
	return 0;
}