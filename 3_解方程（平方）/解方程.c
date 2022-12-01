#include <stdio.h>

int main() {
	int m = 1, n, a, b, x;
	for (m; m < 168; m++) {
		if (168 % 2 == 0) {
			n = 168 / m;
			if ( n>m&& m % 2 == 0 && n % 2 == 0) {

				b = (m + n) / 2;
				x = b * b - 268;
				if (x > 0)
					printf("%d %d %d\n", x, x + 100, x + 268);

			}
		}
	}
	return 0;
}