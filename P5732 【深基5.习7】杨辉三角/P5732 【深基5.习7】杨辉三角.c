#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		long a[n][n];
		for (int i = 0; i < n; i++) {
			a[i][0] = 1;
			a[i][i + 1] = 0;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 1; j <= i; j++) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
		for (int i = 0; i < n ; i++) {
			for (int j = 0; j <= i; j++) {
				if (j != i)
					printf("%ld ", a[i][j]);
				else
					printf("%ld\n", a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

//#include <stdio.h>
//
//int main() {
//	int i, n, j;
//	int a[40][40];
//	while (scanf("%d", &n) != EOF) {
//		a[1][1] = 1;
//		a[2][1] = 1;
//		a[2][2] = 1;
//		for (i = 3; i <= n; i++) {
//			for (j = 1; j <= i; j++) {
//				a[i][1] = 1;
//
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//				a[i][i] = 1;
//			}
//		}
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= i; j++) {
//				if (j != i)
//					printf("%d ", a[i][j]);
//				else
//					printf("%d", a[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}