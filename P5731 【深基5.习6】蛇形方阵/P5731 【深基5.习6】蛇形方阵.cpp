#include <stdio.h>

int main() {
	int wall = 0, i = 1;
	int N;
	int x = 0, y = 0;
	scanf("%d", &N);
	int a[N][N];
	while (i <= N * N) {
		for (x; i <= N * N && x < N - wall; x++) {
			a[x][y] = i++;
		}
		x--;
		for (++y; i <= N * N && y < N - wall; y++) {
			a[x][y] = i++;
		}
		y--;
		for (--x; i <= N * N && x >= wall; x--) {
			a[x][y] = i++;
		}
		x++;
		wall++;
		for (--y; i <= N * N && y >= wall; y--) {
			a[x][y] = i++;
		}
		y++;
		x++;
	}
	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			printf("%3.d", a[k][j]);
		}
		printf("\n");
	}
	return 0;
}