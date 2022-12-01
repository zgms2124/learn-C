#include <stdio.h>

int main() {
	int a = 4, b = 6;
	int t;
	t = a;
	a = b;
	b = t;
	printf("%d %d %d", a, b, t);
	return 0;
}