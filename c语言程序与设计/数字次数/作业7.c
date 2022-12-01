#include <stdio.h>

int main() {
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		printf("Enter row %d:  ", i + 1);
		for (int j = 0; j < 5; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int t;
	printf("Row totals:  ");
	for (int i = 0; i < 5; i++) {
		t = 0;

		for (int j = 0; j < 5; j++) {
			t += a[i][j];
		}
		printf("%d ", t);
	}

	printf("\nColumn totals:  ");
	for (int i = 0; i < 5; i++) {
		t = 0;
		for (int j = 0; j < 5; j++) {
			t += a[j][i];
		}
		printf("%d ", t);
	}
	return 0;
}