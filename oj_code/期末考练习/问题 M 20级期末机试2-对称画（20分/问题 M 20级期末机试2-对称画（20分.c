#include <stdio.h>

int main() {
	int n;
	int x;
	scanf("%d", &x);
	while ( x--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
				printf("%c", 'a' + j);
			}
			printf("%c", 'a' + i);
			for (int j = i - 1; j >= 0; j--) {
				printf("%c", 'a' + j);
			}
			printf("\n");
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			if (i != n - 1)
				printf("a");
			for (int j = 0; j < 2 * (n - i - 1) - 1 ; j++) {
				printf(" ");
			}
			printf("a\n");
		}
		printf("\n");
	}
	return 0;
}