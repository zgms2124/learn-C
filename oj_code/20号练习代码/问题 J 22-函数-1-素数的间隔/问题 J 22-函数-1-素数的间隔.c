#include <stdio.h>

int zhishu(int x) {
	for (int k = 2; k * k <= x; k++) {
		if (x % k == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	int last, next;
	scanf("%d", &n);
	if (zhishu(n) == 1) {
		printf("0");
	} else {
		for (int i = n - 1; i >= 2; i--) {
			if (zhishu(i) == 1) {
				last = i;
				break;
			}
		}
		for (int i = n + 1; i < 1299709; i++) {
			if (zhishu(i) == 1) {
				next = i;
				break;
			}
		}
		printf("%d", next - last);
	}
	return 0;
}