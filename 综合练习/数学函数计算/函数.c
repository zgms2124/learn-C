#include <stdio.h>

int main() {
	int x, y;
	while (scanf("%d", &x) != EOF) {
		if (x < 1) {
			y = x * x;
		} else if (x < 10) {
			y = 2 * x - 1;
		} else {
			y = 3 * x - 12;
		}
		printf("%d\n", y);
	}
	return 0;
}