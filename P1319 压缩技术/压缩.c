#include <stdio.h>

int main() {
	int n, a, sum = 0;
	scanf("%d", &n);
	int ass[n][n];
	int x = 0, y = 0;
	int t = 0;
	while (sum < n * n) {
		scanf("%d", &a);
		for (int  i = 0; i < a; i++) {
			if (x == n) {
				x = 0;
				y++;
			}
			ass[x][y] = t;
			x++;
		}
		if (t == 0)
			t = 1;
		else
			t = 0;
		sum += a;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d", ass[j][i]);
		}
		printf("\n");
	}
	return 0;
}