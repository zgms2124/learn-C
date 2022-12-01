#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	int mon, pay;
	int ans;
	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
		pay = d * 100 + e * 10 + f;
		mon = a * 100 + b * 10 + c;
		ans = mon / pay;
		printf("%d\n", ans);
	}
	return 0;
}