#include <stdio.h>

int main() {
	int n, m;
	while (1) {
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0)
			break;
		char a[m][n + 1];
		int b[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] = 0;
			}
		}
		for (int i = 0; i < m; i++) {
			scanf("%s", a[i]);
		}
		int s = 0;
		int y, x;
		for (int i = 0; i < m && s == 0; i++) {
			for (int j = 0; j < n && s == 0; j++) {
				if (a[i][j] == '@') {
					y = i;
					x = j;
					s = 1;
				}
			}
		}
		b[y][x] = 1;
		int ans = 1;
		for (int i = x + 1; i < n; i++) {
			if (a[y][i] == '.') {
				ans++;
				b[y][i] = 1;
			} else
				break;
		}
		for (int i = x - 1; i >= 0; i--) {
			if (a[y][i] == '.') {
				ans++;
				b[y][i] = 1;
			} else
				break;
		}
		for (int i = y + 1; i < m; i++) {
			if (a[i][x] == '.') {
				ans++;
				b[i][x] = 1;
			} else
				break;
		}
		for (int i = y - 1; i >= 0; i--) {
			if (a[i][x] == '.') {
				b[i][x] = 1;
				ans++;
			} else
				break;
		}
		int t = 0;
		do {
			t = 0;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					if (a[i][j] == '.' && b[i][j] == 0 && ( (b[i + 1][j] == 1 && i + 1 < n) ||
					                                        (b[i - 1][j] && i - 1 >= 0) == 1 || (b[i][j + 1] == 1 && j + 1 < n)
					                                        || (b[i][j - 1] == 1 && j - 1 >= 0))) {
						b[i][j] = 1;
						t++;
					}
				}
			}
			ans += t;

		} while (t > 0);
		printf("%d\n", ans);
	}
	return 0;
}