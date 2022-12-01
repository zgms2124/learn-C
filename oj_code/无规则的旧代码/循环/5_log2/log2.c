#include <stdio.h>

int main() {
	int a, i;
	while (scanf("%d", &a) != EOF) {
		int t = 1;
		for ( i = -1; t <= a; i++) {
			t = t * 2;
		}
		printf("%d\n", i);
	}
	return 0;
}