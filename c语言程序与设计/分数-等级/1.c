#include <stdio.h>

int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		if (a > 100 || a < 0) {
			printf("Illegal grade\n");
		} else {
			a = a / 10;
			switch (a) {
				case 10:
					printf("A\n");
					break;
				case 9:
					printf("A\n");
					break;
				case 8:
					printf("B\n");
					break;
				case 7:
					printf("Latter grade: C\n");
					break;
				case 6:
					printf("Latter grade: D\n");
					break;
				case 5:
					printf("Latter grade: F\n");
					break;
				case 4:
					printf("Latter grade: F\n");
					break;
				case 3:
					printf("Latter grade: F\n");
					break;
				case 2:
					printf("Latter grade: F\n");
					break;
				case 1:
					printf("Latter grade: F\n");
					break;
				case 0:
					printf("Latter grade: F\n");
					break;
			}
		}
	}
	return 0;
}