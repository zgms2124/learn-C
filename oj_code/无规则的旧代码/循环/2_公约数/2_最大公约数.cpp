#include <stdio.h>

int main() {
	int a, b;
	int i;
	int s;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (a < 0 & b < 0) {
			a = -a;
			b = -b;
			if (a > b)
				i = a;
			else
				i = b;
			for (i; i > 0 ; i--) {
				if (a % i == 0 && b % i == 0) {
					printf ("%d\n", -i);
					s = 1;
					break;
				}
			}
		} else {
			if (a > b)
				i = a;
			else
				i = b;
			for (i; i > 0 ; i--) {
				if (a % i == 0 && b % i == 0) {
					printf ("%d\n", i);
					break;
				}
			}
		}
	}

	return 0;
}