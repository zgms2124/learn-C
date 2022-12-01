#include <stdio.h>

int main() {
	long int a, b;
	while (scanf("%d/%d", &a, &b) != EOF) {
		if (a > 0 && b >= 1 && b <= 12) {
			if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
				printf("31");
			if (b == 4 || b == 6 || b == 9 || b == 11)
				printf("30");
			if (b == 2 && ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0))
				printf("29");
			else
				printf("28");
		} else
			printf("-1");


	}
	return 0;
}