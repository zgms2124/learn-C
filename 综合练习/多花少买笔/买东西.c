#include <stdio.h>

int main() {
	int x, num, pay;
	while (scanf("%d", &x) != EOF) {
		num = 0;
		pay = 0;
		while (x >= 38) {
			x -= 38;
			pay += 38;
			num++;
		}
		while (x >= 18) {
			x -= 18;
			pay += 18;
			num++;
		}
		while (x >= 8) {
			x -= 8;
			pay += 8;
			num++;
		}
		if (pay > 68)
			num++;
		printf("%d\n", num);
	}
	return 0;
}