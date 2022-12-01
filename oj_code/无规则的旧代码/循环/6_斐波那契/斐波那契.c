#include <stdio.h>

int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int f1 = 0, f2 = 1;
		printf ("%d, %d", f1, f2);
		int i;
		for (i = 3; i <= a; i++) {
			printf(", %d", f1 + f2);
			f1 = f1 + f2;
			f1 = f1 + f2;
			f2 = f1 - f2;
			f1 = f1 - f2;
		}
		printf("\n");
	}
}