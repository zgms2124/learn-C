#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[n][n];
		for (int i = 0; i < n; i++) {
			a[i][0] = 1;
			a[i][i] = 1;
		}
		for (int i = 2; i < n; i++) {
			for (int j = 1; j < i; j++) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
		int sushu = 2;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (sushu; 1; sushu++) {
					int s = 1;
					for (int i = 2; i < sushu; i++) {
						if (sushu % i == 0) {
							s = 0;
							break;
						}
					}
					if (s == 1)
						break;
				}
				a[i][j] = sushu;
				sushu++;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d", a[i][j]);
				if (j != n - 1)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}