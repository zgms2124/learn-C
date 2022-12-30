#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = n; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			printf("*\n");
		}
		for (int i = 0; i < n + 1; i++) {
			printf("*");
		}
		printf("\n");
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			printf("*\n");
		}
		printf("\n");
	}
	return 0;
}