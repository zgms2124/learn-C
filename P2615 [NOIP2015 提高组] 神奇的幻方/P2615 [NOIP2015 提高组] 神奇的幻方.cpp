#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int a[N][N];
	int x = (N + 1) / 2 - 1;
	int y = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			a[x][y] = 0;
		}
	}
	for (int i = 1; i <= N * N; i++) {
		if (y == 0 && x != N - 1) {
			a[x][y] = i;
			x++;
			y = N - 1;
			continue;
		} else if (x == N - 1 && y == 0) {
			a[x][y] = i;
			y++;
			continue;
		} else if (x == N - 1 && y != 0) {
			a[x][y] = i;
			y--;
			x = 0;
			continue;
		} else if (a[x + 1][y - 1] == 0) {
			a[x][y] = i;
			x++;
			y--;
			continue;
		} else {
			a[x][y] = i;
			y++;
		}
	}
	for (y = 0; y < N - 1; y++) {
		for (x = 0; x < N; x++) {
			printf("%d ", a[x][y]);
		}
		printf("\n");
	}
	for (int x = 0; x < N; x++) {
		printf("%d ", a[x][y]);
	}
	return 0;
}