#include <stdio.h>

int main() {
	int t;
	int a = 0, b = 0, c = 0, d = 0;
	while (scanf("%d", &t) != EOF) {
		a = t / 3600;
		b = (t - a * 3600) / 60;
		c = ((t - a * 3600) - b * 60);
		printf("%d:%d:%d\n", a, b, c);
	}
	return 0;
}