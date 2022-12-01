#include <stdio.h>

int main() {
	int s1, s2, s3;
	int t = 1, s = 0;
	int N;
	scanf("%d %d %d", &s1, &s2, &s3);
	N = s1 + s2 + s3;
	int a[N], b[N];
	for (int i = 0; i < N; i++) {
		b[i] = 0;
		a[i] = 0;
	}

	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				t = i + j + k;
				int w = 0;
				for (int p = 0; p <= s; p++) {
					if (a[p] == t) {
						b[p]++;
						w = 1;
						break;
					}
				}
				if (w == 0) {
					s++;
					a[s - 1] = t;
					b[s - 1] = 1;
				}
			}
		}
	}
	int max = b[0];
	int z = a[0];
	int min = a[0];
	for (int i = 1; i < s; i++) {
		if (b[i] > max) {
			max = b[i];
			min = a[i];
			z = a[i];
		}
		if (b[i] == max) {
			if (a[i] < min) {
				min = a[i];
				z = a[i];
			}
		}
	}
	printf("%d", z);
	return 0;
}