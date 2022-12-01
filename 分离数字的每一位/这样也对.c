#include <stdio.h>

int main() {
	int a, c;
	int b = 10, n = 1;
	scanf("%d", &a);
	while (a > b) {
		b *= 10;
		n++;
	}
	printf("这是个%d位数\n", n);
	while (a > 0) {
		c = a / (b / 10);
		b = b / 10;
		a = a - c * b;
		printf("%d\n", c);
	}
	return 0;
}