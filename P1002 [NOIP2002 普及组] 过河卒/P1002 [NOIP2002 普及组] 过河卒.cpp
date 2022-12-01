//#include <stdio.h>

//
//int main() {
//	int x1, y1, x2, y2;
//	scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
//	long long a[y1 + 1][x1 + 1];
//	for (int i = 0; i <= y1; i++) {
//		for (int j = 0; j <= x1; j++) {
//			a[i][j] = 0;
//		}
//	}
//	for (int i = 0; i <= y1; i++) {
//		a[i][0] = 1;
//	}
//	for (int i = 0; i <= x1; i++) {
//		a[0][i] = 1;
//	}
//	a[y2][x2] = -1;
//	a[y2 - 1][x2 - 2] = -1;
//	a[y2 - 1][x2 + 2] = -1;
//	a[y2 + 1][x2 - 2] = -1;
//	a[y2 + 1][x2 + 2] = -1;
//	a[y2 + 2][x2 + 1] = -1;
//	a[y2 + 2][x2 - 1] = -1;
//	a[y2 - 2][x2 + 1] = -1;
//	a[y2 - 2][x2 - 1] = -1;
//	for (int i = 0; i <= y1; i++) {
//		if (a[i][0] == -1) {
//			for (int j = i + 1; j <= y1; j++) {
//				a[j][0] = -1;
//			}
//			break;
//		}
//	}
//	for (int i = 0; i <= x1; i++) {
//		if (a[0][i] == -1) {
//			for (int j = i + 1; j <= x1; j++) {
//				a[0][j] = -1;
//			}
//			break;
//		}
//	}
//	for (int i = 1; i <= y1; i++) {
//		for (int j = 1; j <= x1; j++) {
//			if (a[i][j] != -1) {
//				a[i][j] = a[i ][j - 1] + a[i - 1][j];
//				if (a[i ][j - 1] == -1 || a[i - 1][j] == -1) {
//					a[i][j]++;
//				}
//				if (a[i ][j - 1] == -1 && a[i - 1][j] == -1) {
//					a[i][j] ++;
//				}
//			}
//
//		}
//	}
//
//	printf("%lld", a[y1][x1]);
//	return 0;
//}









#include <stdio.h>

int main() {
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
	y1 += 3;
	x1 += 3;
	long long a[y1 ][x1 ];
	for (int i = 0; i < y1; i++) {
		for (int j = 0; j < x1; j++) {
			a[i][j] = 0;
		}
	}
	a[0][1] = 1;
	a[1][0] = 0;
	a[y2 + 1][x2 + 1] = -1;
	a[y2 ][x2 - 1] = -1;
	a[y2 ][x2 + 3] = -1;
	a[y2 + 2][x2 - 1] = -1;
	a[y2 + 2][x2 + 3] = -1;
	a[y2 + 3][x2 + 2] = -1;
	a[y2 + 3][x2 ] = -1;
	a[y2 - 1][x2 + 2] = -1;
	a[y2 - 1][x2 ] = -1;
	for (int i = 1; i < y1 - 1; i++) {
		for (int j = 1; j < x1 - 1; j++) {
			if (a[i][j] != -1) {
				a[i][j] = a[i ][j - 1] + a[i - 1][j];
				if (a[i ][j - 1] == -1 || a[i - 1][j] == -1) {
					a[i][j]++;
				}
				if (a[i ][j - 1] == -1 && a[i - 1][j] == -1) {
					a[i][j] ++;
				}
			}

		}
	}

	printf("%lld", a[y1 - 2][x1 - 2]);
	return 0;


}
