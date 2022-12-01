#include <stdio.h>

int main() {
	int a, b;
	printf("Enter a 24-hour time:");
	while (scanf("%d:%d", &a, &b) != EOF) {
		if (a > 12) {
			a = a - 12;
			printf ("Equivalent 12-hour time:%d:%d PM\n", a, b);
		} else {
			a = a;
			printf ("Equivalent 12-hour time:%d:%d AM\n", a, b);
		}
	}

	return 0;
}