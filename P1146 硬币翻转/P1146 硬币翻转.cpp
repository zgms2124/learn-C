#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", N);
	for (int i = 1; i < N; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < i; j++) {
				printf("1");
			}
			for (int j = 0; j < N - i; j++) {
				printf("0");
			}
			printf("\n");
		} else {
			for (int j = 0; j < i; j++) {
				printf("0");
			}
			for (int j = 0; j < N - i; j++) {
				printf("1");
			}
			printf("\n");
		}
	}
	for (int i = 0; i < N; i++) {
		printf("1");
	}
	return 0;
}