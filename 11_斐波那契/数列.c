#include <stdio.h>

int main() {
	int f1 = 1,	f2 = 1;
	int n;
	printf("%d\n%d\n", f1, f2);
	for ( n = 3; n < 41; n++) {
		if (n % 2 == 0) {
			f1 = f1 + f2;
			printf("%d\n", f1);
		} else {
			f2 = f1 + f2;
			printf("%d\n", f2);
		}

	}
	return 0;
}