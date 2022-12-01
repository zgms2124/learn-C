#include <stdio.h>

int main() {
	long int a, b;
	while (scanf("%l/%l", &a, &b) != EOF) {
		if (a < 0 || b > 12 || b < 1)
			printf("-1 ");
		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
			printf("31 ");
		else if (b == 4 || b == 6 || b == 9 || b == 11)
			printf("30 ");
		else if (b == 2 && (a % 400 == 0 || a % 100 != 0 && a % 4 == 0))
			printf("29 ");
		else
			printf("28 ");
	}
	return 0;
}