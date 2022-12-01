#include <stdio.h>

int main() {
	int x, num;
	while (scanf("%d", &x) != EOF) {
		num = 0;
		for (int i = 1; i <= x / 5; i++) {
			for (int j = 1; j <= x / 2; j++) {
				for (int k = 1; k <= x; k++) {
					if (i * 5 + j * 2 + k == x)
						num++;
				}
			}
		}
		printf("%d\n", num);
	}
	return 0;
}