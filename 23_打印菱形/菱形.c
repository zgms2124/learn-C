#include <stdio.h>

int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");

	}
	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");

	}
	return 0;
}