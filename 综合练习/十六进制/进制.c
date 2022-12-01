#include <stdio.h>

int main() {
	int n, t, j;
	int x[8];
	int num, sum;
	do {
		scanf("%d", &n);
		if (n != 0) {
			sum = 0;
			j = 0;
			t = n;
			while (t > 0) {
				num = t % 16;
				if (num <= 9) {
					sum += num;
				}
				t /= 16;
			}
			printf("%d\n", sum);
		}
	} while (n != 0);
	return 0;
}