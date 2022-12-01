#include <stdio.h>

int main() {
	int a;
	while (scanf("%d", &a) != EOF) {

		while (a >= 7) {
			a = a - 7;
		}
		printf("%d", a);
	}
	return 0;
}