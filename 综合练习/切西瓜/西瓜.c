#include <stdio.h>

int main() {
	int m;
	while (scanf("%d", &m) != EOF) {
		int s = 0;
		for (int i = 1; i < m; i++) {
			if (i % 2 == 0 && (m - i) % 2 == 0) {
				s = 1;
				break;
			}
		}
		if (s == 1) {
			printf("YES\n");
		} else
			printf("NO\n");
	}
	return 0;
}