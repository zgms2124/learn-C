#include <stdio.h>

int main() {
	int a;
	double b;
	while (scanf("%d", &a) != EOF) {
		b = 1.05 * a;
		printf("%.2f\n", b);
	}
	return 0;
}