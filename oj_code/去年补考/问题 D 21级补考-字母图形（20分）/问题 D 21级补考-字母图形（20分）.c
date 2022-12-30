#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++)
				printf(" ");
			for (int j = i; j > 0; j--) {
				printf("%c", 'a' + j);
			}
			printf("a");
			for (int j = 1; j <= i; j++) {
				printf("%c", 'a' + j);
			}
			printf("\n");
		}
	}
	return 0;
}