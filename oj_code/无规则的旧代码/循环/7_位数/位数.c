#include <stdio.h>

int main() {
	int a;
	int i;
	while (scanf("%d", &a) != EOF) {
		int t = 1;
		for (i = 0; t - 1 <= a; i++) {
			t = t * 10;
		}
		printf("%d\n", i);
	}
	return 0;
}