#include <stdio.h>

int main() {
	int a, b;
	int max, min;
	int digta, digtb;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)  {
		scanf("%d %d", &a, &b);
		int t1 = a;
		int t2 = b;
		for (digta = 0; t1 > 0; digta++) {
			t1 /= 10;
		}
		for (digtb = 0; t2 > 0; digtb++) {
			t2 /= 10;
		}
		int x[digta];
		int y[digtb];
		for (int i = 0; i < digta; i++) {
			x[i] = a % 10;
//			printf("%d\n", x[i]);
			a /= 10;
		}
		for (int j = 0; j < digtb; j++) {
			y[j] = b % 10;
//			printf("%d\n", y[j]);
			b /= 10;
		}
		if (digta > digtb)
			max = digta;
		else
			max = digtb;
		int p = 0;;
		for (int k = 0; k < max; k++) {
			int q = 1;
			for (int l = 0; l < k; l++) {
				q *= 10;
			}
			if (digta > k && digtb > k) {
				p = p + (x[k] + y[k]) % 10 * q;
			} else if (digta > k || digtb > k) {
				if (max == digta) {
					p = p + (x[k]) * q;
				} else
					p = p + (y[k]) * q;
			}
		}
		printf("%d\n", p);
	}
	return 0;
}