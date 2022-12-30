#include <stdio.h>

int sushu(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int huiweng(int x) {
	int a[3];
	int r = 0;
	while (x > 0) {
		a[r++] = x % 10;
		x /= 10;
	}
	if (r == 1)
		return 1;
	else if (r == 2) {
		if (a[0] == a[1])
			return 1;
	} else {
		if (a[0] == a[2])
			return 1;
	}
	return 0;

}

int main() {
	int a[666];
	int r = 0;
	for (int i = 2; i < 999; i++) {
		if (sushu(i ) == 1 && huiweng(i) == 1) {
			a[r++] = i;
		}
	}
	int L, R;
	while (scanf("%d %d", &L, &R) != EOF) {
		int min, max;
		for (int i = 0; i < r; i++) {
			if (a[i] >= L) {
				min = i;
				break;
			}
		}
		for (int i = min; i < r; i++) {
			if (a[i] == R) {
				max = i;
				break;
			}
			if (a[i] > R) {
				max = i - 1;
				break;
			}
		}
		printf("%d\n", max - min + 1);
	}
	return 0;
}