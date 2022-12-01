#include <stdio.h>

int main() {
	int N, x, n, i;
	while (scanf("%d", &N) != EOF) {
		int s = 0;
		int a[N];
		for (int i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &x);
		for (i = 0; i < N; i++) {
			if (a[i] == x) {
				s = 1;
				break;
			}
		}
		if (s == 1) {
			printf("%d\n", i + 1);
		} else
			printf("-1\n");
	}
	return 0;
}