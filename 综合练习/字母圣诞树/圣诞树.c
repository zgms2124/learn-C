#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		char a[n];
		for (int i = 0; i < n; i++) {
			scanf(" %c", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			for (int k = 0; k < i + 1; k++) {
				for (int j = i + 1; j > 0; j--) {
					printf(" ");
				}
				printf("%c\n", a[k]);
				for (int j = i; j > k; j--) {
					printf(" ");
				}
				for (int l = 0; l < 2 * k + 3; l++) {
					printf("%c", a[k]);
				}
				printf("\n");

			}

		}
	}
	return 0;
}