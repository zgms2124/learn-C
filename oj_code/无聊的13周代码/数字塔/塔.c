#include <stdio.h>

int main() {
	int n;
	int a[100][100];
	while (scanf("%d", &n) != EOF) {
		int max = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i + 1; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for (int i = 1; i < n; i++) {
			a[i][0] += a[i - 1][0];
			for (int j = 1; j < i; j++) {
				if (a[i - 1][j] > a[i - 1][j - 1]) {
					a[i][j] += a[i - 1][j];
				} else {
					a[i][j] += a[i - 1][j - 1];
				}
			}
			a[i][i] += a[i - 1][i - 1];
		}
		for (int i = 0; i < n; i++) {
			if (a[n - 1][i] > max)
				max = a[n - 1][i];
		}
		printf("%d\n", max);
	}
	return 0;
}

//#include <stdio.h>
//
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		int a[n][n];
//		int b[n][n];
//		for (int i = 0; i < n; i++) {
//			b[i][0] = 1;
//			b[i][i] = 1;
//		}
//		for (int i = 2; i < n; i++) {
//			for (int j = 1; j < i; j++) {
//				b[i][j] = b[i - 1][j] + b[i - 1][j - 1];
//			}
//		}
//		int max = 0;
//		for (int i = 0; i < n; i++) {
//			if (b[n - 1][i] > max) {
//				max = b[n - 1][i];
//			}
//		}
//		int t = max + 1;
//		int c[n][n][t];
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				c[i][j][0] = b[i][j];
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < i + 1; j++) {
//				scanf("%d", &a[i][j]);
//				int y = i - 1, x = j - 1;
//				int num = 1;
//				for (int l = 1; l <= c[i][j][0]; l++) {
//					if (x == -1 || x == i - 1) {
//						if (x < 0) {
//							if (i == 0) {
//								c[i][j][1] = a[i][j];
//							} else {
//								c[i][j][1] = a[i][j] + c[i - 1][j][1];
//							}
//						} else {
//							c[i][j][1] = a[i][j] + c[i - 1][j - 1][1];
//						}
//					} else {
//						c[i][j][l] = c[y][x][num] + a[i][j];
//						num++;
//					}
//					if (num > c[y][x][0]) {
//						num = 1;
//						x++;
//					}
//				}
//
//			}
//		}
//		max = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 1; j <= c[n - 1][i][0]; j++) {
//				if (c[n - 1][i][j] > max)
//					max = c[n - 1][i][j];
//			}
//		}
////		for (int i = 1; i < n; i++) {
////			a[i][0] += a[i - 1][0];
////			for (int j = 1; j < i; j++) {
////				if (a[i - 1][j] > a[i - 1][j - 1]) {
////					a[i][j] += a[i - 1][j];
////				} else {
////					a[i][j] += a[i - 1][j - 1];
////				}
////			}
////			a[i][i] += a[i - 1][i - 1];
////		}
////		for (int i = 0; i < n; i++) {
////			if (a[n - 1][i] > max)
////				max = a[n - 1][i];
////		}
//		printf("%d\n", max);
//	}
//	return 0;
//}