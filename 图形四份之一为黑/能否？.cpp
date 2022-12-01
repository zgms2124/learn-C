#include <stdio.h>
void cf();

int main() {
	int N = 1;
	int loN;
	scanf("%d", &loN);
	for (int l = 0; l < loN; l++) {
		N *= 2;
	}
//	int a1[N];
	int t1 = N;
	int i, j;
	int t2, t3;
	int a[N][N];
	int z = 1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = 1;
		}
	}

	for (int k = 1; k <= loN; k++) {
		t2 = N;
		for (int p = 0; p < k; p++) {
			t2 = t2 / 2;
		}
		t3 = t1 / t2;
		for (int p = 1; p < t3 ; p += 2) {
			for ( i = 0; (i + 1) <= t2 * p; i++) {
				if (t2 * (p - 1) < (i + 1)) {
					for (int q = 1; q < t3 ; q += 2) {
						for ( j = 0; (j + 1) <= t2 * q; j++) {
							if (t2 * (q - 1) < (j + 1) ) {
								if (a[i][j] == 1) {
									a[i][j] = 0;
								}
							}
						}
					}

				}
			}
		}

	}
	for ( i = 0; i < N; i++) {
		for ( j = 0; j < N; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}





//	int a1[10];
//	for (int i = 0; i < 10; i++) {
//		a1[i] = i;
//		printf("%d", a1[i]);
//	}

	return 0;
}