#include <stdio.h>

int main() {
	int a;
	int t = 0;
	while (scanf("%d", &a) != EOF) {
		while (a > 0) {
			t = t * 10 + a % 10;
			a = a / 10;
		}
		printf("%d\n", t);
	}
	return 0;
}
