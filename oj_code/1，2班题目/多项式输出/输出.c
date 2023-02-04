#include <stdio.h>

int main() {
	int maxci;
	while (scanf("%d", &maxci) != EOF) {
		int ans[114];
		int ansr = 0;
		for (int i = 0; i <= maxci; i++) {
			scanf("%d", &ans[ansr++]);
		}
		for (int i = 0; i <= maxci; i++) {
			if (ans[i] > 0) {
				if (i > 0) {
					printf("+");
				}
				if (ans[i] == 1) {
					if (i == maxci)
						printf("1");
				} else
					printf("%d", ans[i]);
				if (i < maxci) {
					printf("x");
				}
				if (i < maxci - 1) {
					printf("^%d", maxci - i);
				}
			} else if (ans[i] < 0) {
				if (ans[i] == -1) {
					if (i != maxci)
						printf("-");
					else
						printf("-1");
				} else {
					printf("%d", ans[i]);
				}
				if (i < maxci) {
					printf("x");
				}
				if (i < maxci - 1) {
					printf("^%d", maxci - i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}