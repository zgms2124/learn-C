#include <stdio.h>

int main() {
	int n, a, b, num, t;
	while (scanf("%d %d", &a, &b) != EOF ) {
		num = 0;
		for (int i = a; i <= b; i++) {
			t = i;
			while (t > 0) {
				if (t % 10 == 7)
					num++;
				t /= 10;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}