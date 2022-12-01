#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int x = a;
	printf("%d=", x);
	for ( int i = 2; i < a; i++) {
		if (a % i == 0) {
			a = a / i;
			printf("%d*", i);
			i = 1;
		}

	}
	printf("%d\n", a);
	return 0;
}