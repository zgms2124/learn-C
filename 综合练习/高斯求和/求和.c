#include <stdio.h>

int main() {
	int n, M;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &M);
			if (M == 0) {
				printf("1");
			} else {
				printf("5");
				for (int j = 1; j < M; j++) {
					printf("0");
				}
				printf("5");
				for (int j = 1; j < M; j++) {
					printf("0");
				}
			}
			printf("\n");
		}

	}
	return 0;
}