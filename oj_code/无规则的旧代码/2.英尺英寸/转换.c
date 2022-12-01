#include <stdio.h>

int main() {
	int a;
	double b;
	while (scanf("%d", &a) != EOF) {
		b = a * 2.54;
		printf("%.1f\n", b);
	}
	return 0;
}