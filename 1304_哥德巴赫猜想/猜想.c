#include <stdio.h>

int main() {
	int N;
	int x, y, s, t;
	scanf("%d", &N);
	for (int i = 4; i <= N; i += 2) {
		for (int j = 2; j < i; j++) {
			t = 0;
			for (int m = 2; m < j; m++) {
				if (j % m == 0) {
					t = 1;
					break;
				}
			}
			if (t == 0) {
				s = 0;
				x = i - j;
				y = j;
				for (int k = 2; k < x; k++) {
					if (x % k == 0) {
						s = 1;
						break;
					}
				}
				if (s == 0)
					break;
			}

		}
		printf("%d=%d+%d\n", i, y, x);
	}
	return 0;
}