#include <stdio.h>

int main() {
	int a;
	char ch;
	while (scanf("%d %c", &a, &ch) != EOF) {
		int t = 0;
		int x, m, n, q, y;
		if (a >= 7) {
			for (int i = 1; i ; i++) {
				t = t + 2 * i + 1;
				x = 2 * t + 1;
				if (x <= a)
					y = a - x;
				if (x > a) {
					break;
				}
//			x = (2 * i + 1) * 2 + 1;
				m = i;
				q = i;

			}
//		printf("%d", x);
			n = 0;
//begin1:
			while (m >= 0) {
				for (int k = 0; k < n; k++) {
					printf(" ");
				}
				for (int j = 0; j < (2 * m + 1); j++) {
					printf("%c", ch);
				}
				printf("\n");
				m--;
				n++;
//			if (m >= 0) {
//				goto begin1;
//			}
			}
			m = m + 2;
//		printf("%d %d", n, m);
//begin2:
			while (m < q + 1) {
				for (int k = 0; k < n - 2; k++) {
					printf(" ");
				}
				for (int j = 0; j < (2 * m + 1); j++) {
					printf("%c", ch);
				}
				printf("\n");
				m++;
				n--;
//			if (m < q + 1) {
//				goto begin2;
//			}
			}
			printf("%d\n", y);
		} else {
			printf("%c\n", ch);
			printf("%d", a - 1);
		}
	}
	return 0;
}