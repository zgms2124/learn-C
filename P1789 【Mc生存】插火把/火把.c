#include <stdio.h>

int main() {
	int n, wood, stone, x, y;
	scanf("%d %d %d", &n, &wood, &stone);
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}
	for (int i = 0; i < wood; i++) {
		scanf("%d %d", &x, &y);
		for (int j = x - 3; j <= x + 1; j++)
			if (j >= 0 && j < n) {
				a[j][y - 1] = 1;
			}
		for (int j = y - 3; j <= y + 1; j++)
			if (j >= 0 && j < n) {
				a[x - 1][j] = 1;
			}
		a[x - 2][y - 2] = 1;
		a[x - 2][y] = 1;;
		a[x][y - 2] = 1;
		a[x][y] = 1;
	}
	for (int i = 0; i < stone; i++) {
		scanf("%d %d", &x, &y);
		for (int j = x - 3; j <= x + 1; j++) {
			for (int k = y - 3; k <= x + 1; k++) {
				a[j][k] = 1;
			}
		}
	}
	int num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 0)
				num++;
		}
	}
	printf("%d", num);

	return 0;
}