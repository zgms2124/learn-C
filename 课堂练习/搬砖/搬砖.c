#include <stdio.h>

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 12; j++) {
			for (int k = 1; k <= 36; k++) {
				if ((36 - i * 4 - j * 3) * 2 == k && i + k + j == 36) {
					printf("%d %d %d", i, j, k);
					return 0;
				}
			}
		}
	}
	return 0;
}