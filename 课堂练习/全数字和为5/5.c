#include <stdio.h>

int main() {
	int t = 0;
	int sum = 0, ans = 0;
	for (int i = 100; i <= 100000; i++) {
		sum = 0;
		int t = i;
		while (t > 0) {
			sum += t % 10;
			t /= 10;
		}
		if (sum == 5) {
			ans++;
		}
	}
	printf ("%d", ans);
	return 0;
}