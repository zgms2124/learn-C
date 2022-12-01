#include <stdio.h>

int zhishu2(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int zhishu(int x, int ass[]) {
	for (int i = 0; x >= ass[i]; i++) {
		if (x == ass[i])
			return 1;
	}
	return 0;
}

int piaoshu(int x, int ass[]) {
	if (x <= 10)
		return 1;
	int s = 0;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			s = 1;
			if (zhishu(i,  ass) == 1) {
				if (i != 2 && i != 3 && i != 5 && i != 7)
					return 0;

			}
			if (zhishu(x / i,  ass) == 1) {
				if (x / i != 2 && x / i != 3 && x / i != 5 && x / i != 7)
					return 0;

			}
		}
	}
	if (s == 1)
		return 1;
	else
		return 0;
}

int main() {
	int n;
	int ass[1000];
	int r = 0;
	for (int i = 2; r < 1000; i++) {
		if (zhishu2(i) == 1) {
			ass[r] = i;
			r++;
		}
	}

	while (	scanf("%d", &n) != EOF) {
		if (n == 1)
			printf("The 1st humble number is 1.\n");
		if (n == 2)
			printf("The 2nd humble number is 2.\n");
		if (n == 3)
			printf("The 3rd humble number is 3.\n");
		else {
			int  j = 4;
			for (int i = 4; j <= n; i++) {
				if (piaoshu(i, ass) == 1) {
					if (j == n) {
						printf("The %dth humble number is %ld.\n", n, i);
					}
					j++;
				}
			}
		}

	}
	return 0;
}