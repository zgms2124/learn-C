#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &a);
		for (int i = 0; i < a - 1; i++) {
			printf("-");
		}
		printf("\n\\");
		for (int i = 0; i < a - 3; i++) {
			printf(" ");
		}
		printf("/\n");
		for (int i = a / 2 - 1; i >= 2; i--) {
			for (int j = 0; j < a / 2 - i; j++) {
				printf(" ");
			}
			printf("\\");
			for (int j = 0; j < (i - 1) * 2 - 1; j++) {
				printf("*");
			}
			printf("/\n");
		}
		for (int i = 2; i <= a / 2 ; i++) {
			for (int j = 0; j < a / 2 - i; j++) {
				printf(" ");
			}
			printf("/");
			for (int j = 0; j < i - 2; j++) {
				printf(" ");
			}
			printf("*");
			for (int j = 0; j < i - 2; j++) {
				printf(" ");
			}
			printf("\\\n");


		}
		for (int i = 0; i < a - 1; i++) {
			printf("-");
		}
		printf("\n\n");
	}
	return 0;
}