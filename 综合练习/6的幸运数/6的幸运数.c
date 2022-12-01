#include <stdio.h>

int main() {
	int n, m, t;
	while (scanf("%d", &n) != EOF) {
		for (int i = 6; n > 0; i++) {
			t = i;
			if (i % 6 == 0) {
				n--;
				m = i;
				continue;
			}
			if (t % 10 == 6) {
				n--;
				m = i;
				continue;
			}
			t /= 10;
			if (t % 10 == 6) {
				n--;
				m = i;
				continue;
			}
			t /= 10;
			if (t % 10 == 6) {
				n--;
				m = i;
				continue;
			}
			t /= 10;

		}
		printf("%d\n", m);
	}
	return 0;
}