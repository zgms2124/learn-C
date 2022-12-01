#include <stdio.h>

int main() {
	int n, a, num;
	while (scanf("%d", &n) != EOF) {
		num = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a);
			if (a < 60) {
				num++;
			}
		}
		printf("%d\n", 200 * num);
	}
	return 0;
}