#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	while (scanf("%d/%d+%d/%d", &a, &b, &c, &d) != EOF) {
		f = b * d;
		e = a * d + b * c;
		for (int i = 2; i <= f && i <= e; i++) {
			if (f % i == 0 && e % i == 0) {
				f /= i;
				e /= i;
				i = 1;
			}
		}
		if (f != 1) {
			printf("%d/%d\n", e, f);
		} else
			printf("%d\n", e);
	}
	return 0;
}