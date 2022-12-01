#include <stdio.h>

int main() {
	int n, num, m;
	while (scanf("%d", &n) != EOF) {
		num = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &m);
			while (m >= 100) {
				m -= 100;
				num++;
			}
			while (m >= 50) {
				m -= 50;
				num++;
			}
			while (m >= 10) {
				m -= 10;
				num++;
			}
			while (m >= 5) {
				m -= 5;
				num++;
			}
			while (m >= 2) {
				m -= 2;
				num++;
			}
			while (m >= 1) {
				m -= 1;
				num++;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}