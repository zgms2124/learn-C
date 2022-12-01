#include <stdio.h>

int main() {
	int N, M;
	int i, j;
	int begin, end;
	scanf("%d", &N);
	int a[N + 1];
	int x = N + 1 ;
	for ( i = 0; i < N; i++) {
		a[i] = 1;
	}
	scanf("%d", &M);
	for ( i = 0; i < M; i++) {
		scanf("%d %d", &begin, &end);
		for (j = begin; j <= end; j++) {
			if (a[j] == 1) {
				a[j] = 0;
				x--;
			}
		}
	}
	printf("%d", x);
	return 0;
}