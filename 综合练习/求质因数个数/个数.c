#include <stdio.h>


int main() {
	int k, a, b;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d%d", &a, &b);
		int bb = b - b / 2 - b / 3 + b / 6;
		int aa = --a - a / 2 - a / 3 + a / 6;
		printf("%d\n", bb - aa);
	}
	return 0;
}

//#include <stdio.h>
//int q(int b);
//
//int main() {
//	int n, a, b;
//	while (scanf("%d", &n) != EOF) {
//		while (n--) {
//			if (n < 0)
//				break;
//			scanf("%d%d", &a, &b);
//			printf("%d\n", q(b) - q(a - 1));
//		}
//	}
//	return 0;
//}
//
//int q(int b) {
//	int sum, er, san, liu;
//	er = b / 2;
//	san = b / 3;
//	liu = b / 6;
//	sum = b - er - san + liu;
//	return sum;
//}


#include <stdio.h>

int main() {
	int k, a, b, i, t;
	while (scanf("%d", &k) != EOF) {
		while (k--) {
			int numa, numb;
			if (k < 0)
				break;
			scanf("%d%d", &a, &b);
			if (a <= 10) {
				numa = --a - a / 2 - a / 3 + a / 6;
			}

			else {
				numa = 3;
				for ( i = 10, t = 1; i < a - 10; i *= t, t++) {
					numa += 3;
					if ((t - 1) % 3 == 0)
						numa++;
				}
				a -= i;
				numa = --a - a / 2 - a / 3 + a / 6;
			}
			if (b <= 10) {
				numb = b - b / 2 - b / 3 +  b / 6;
			}

			else {
				numb = 3;
				for ( i = 10, t = 2; i < b - 10; i = 10 * t, t++) {
					numb += 3;
					if (t > 1 && (t - 1) % 3 == 0)
						numb++;
				}
				b -= i;
				numb += b - b / 2 - b / 3 + b / 6;
			}
			printf("%d\n", numb - numa);
		}
	}
	return 0;
}
