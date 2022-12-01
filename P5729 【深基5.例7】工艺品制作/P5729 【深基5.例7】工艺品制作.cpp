#include <stdio.h>

int main() {
	int w, q, h;
	scanf("%d %d %d", &w, &q, &h);
	int t = w * q * h;
	int a[w][q][h];
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < q; j++) {
			for (int k = 0; k < h; k++) {
				a[i][j][k] = 1;
			}
		}
	}
	int m;
	scanf("%d", &m);
	int x1, y1, z1, x2, y2, z2;
	for (int l = 0; l < m; l++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
		x1--;
		x2--;
		y1--;
		y2--;
		z1--;
		z2--;
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < q; j++) {
				for (int k = 0; k < h; k++) {
					if (i >= x1 && i <= x2 && j >= y1  && j <= y2  & k >= z1  && k <= z2 )
						a[i][j][k] = 0;
				}
			}
		}

	}
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < q; j++) {
			for (int k = 0; k < h; k++) {
				if (a[i][j][k] == 0) {
					t--;
				}
			}
		}
	}
	printf("%d", t);
	return 0;

}