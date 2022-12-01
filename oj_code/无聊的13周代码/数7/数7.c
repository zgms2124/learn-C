#include <stdio.h>

int main() {
	int n;
	int num = 0;
	scanf("%d", &n);
	for (int i = 7; i <= n; i++) {
		int t = i;
		if (t % 7 == 0) {
			num++;
			continue;
		}
		while (t > 0) {
			if (t % 10 == 7) {
				num++;
				break;
			}
			t /= 10;
		}
	}
	printf("%d", num);
	return 0;
}