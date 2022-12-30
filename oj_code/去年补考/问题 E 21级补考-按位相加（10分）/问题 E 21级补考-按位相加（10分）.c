#include <stdio.h>

int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		char temp[10];
		int len = 0;
		if (a == 0 && b == 0) {
			printf("0\n");
			continue;
		}
		while (a > 0 || b > 0) {
			temp[len++] = '0' + ((a % 10) + (b % 10)) % 10;
			a /= 10;
			b /= 10;
		}
		int s = 1;
		for (int i = len - 1; i >= 0; i--) {
			if (temp[i] != '0' || s == 0) {
				printf("%c", temp[i]);
				s = 0;
			}
		}
		if (s == 1)
			printf("0");
		printf("\n");
	}
	return 0;
}