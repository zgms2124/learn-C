#include <stdio.h>
int a, b, ass[10];

int huiwen(int x) {
	int len = 0;
	while (x > 0) {
		ass[len] = x % 10;
		len++;
		x /= 10;
	}
	if (len == 1)
		return 1;
	for (int k = 0; k < len / 2; k++) {
		if (ass[k] != ass[len - k - 1])
			return 0;
	}
	return 1;
}

int zhishu(int x) {
	for (int k = 3; k * k <= x; k++) {
		if (x % k == 0)
			return 0;
	}
	return 1;
}

int main() {
	while (scanf("%d %d", &a, &b) != EOF) {
		int num = 0;
		if (a <= 2)
			num++;
		if (a == 1)
			num--;
		if (a % 2 == 0)
			a++;
		if (b >= 9989899)
			b = 9989899;
		for (int i = a; i <= b; i += 2) {
			if (huiwen(i) == 1) {
				if (zhishu(i) == 1)
					num++;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}