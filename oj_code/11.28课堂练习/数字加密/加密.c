#include <stdio.h>

int main() {
	int n;
	int a[4];
	int ans[4];
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		while (n > 0) {
			a[i] = n % 10;
			n /= 10;
			i++;
		}
		for (i = 0; i < 4; i++) {
			a[i] += 9;
			a[i] %= 10;
		}
		ans[0] = a[2];
		ans[2] = a[0];
		ans[1] = a[3];
		ans[3] = a[1];
		int daan = 0;
		for (i = 3; i >= 0; i--) {
			daan = daan * 10 + ans[i];
		}
		printf("The encrypted number is %d\n", daan);
	}
	return 0;
}