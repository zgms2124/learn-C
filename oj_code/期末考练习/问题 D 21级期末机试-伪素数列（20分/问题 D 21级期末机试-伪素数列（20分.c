#include <stdio.h>

int zhishu(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n, i;
	int cnt = 0;
	int a[5001];
	for (i = 2; cnt < 5001; i++) {
		int t = i;
		if (zhishu(i))
			a[cnt++] = i;
		else {
			while (t > 0) {
				if (t % 10 != 2 && t % 10 != 3 && t % 10 != 5 && t % 10 != 7) {
					break;
				}
				t /= 10;
				if (t == 0)
					a[cnt++] = i;
			}
		}
	}
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", a[n - 1]);
	}
	return 0;
}
