#include <stdio.h>

int main() {
	int n, j, t;
	int x[10];
	while (scanf("%d", &n) != EOF) {
		int a = 0, b = 0;
		for (int i = 0; i < 10; i++) {
			x[i] = 2;
		}
		for (int i = 1; i <= n; i++) {
			int num1 = 0, num0 = 0;
			t = i;
			j = 0;
			while (t > 0) {
				x[j] = t % 2;
				t /= 2;
				j++;
			}
			for (int k = 0; k < j; k++) {
				if (x[k] == 0) {
					num0++;
				} else if (x[k] == 1) {
					num1++;
				}
			}
			if (num1 > num0)
				a++;
			else
				b++;
		}
		printf("%d %d\n", a, b);
	}
	return 0;
}