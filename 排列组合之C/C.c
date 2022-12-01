#include <stdio.h>
int Cplzh(int, int );

int main() {
	int t, x, y;
	scanf("%d %d", &x, &y);
	t = Cplzh(x, y);
	printf("%d", t);
	return 0;
}

int Cplzh(int a, int b) {
	int t = b, c = 1;
	for (t; t > 0; t--) {
		c = c * a;
		a--;
	}
	for (b; b > 0; b--) {
		c = c / b;
	}
	return c;
}