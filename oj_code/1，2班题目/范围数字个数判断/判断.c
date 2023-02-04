#include <stdio.h>

int main() {
	int L, R;
	int num;
	while (scanf("%d %d %d", &L, &R, &num) != EOF) {
		int ans = 0;
		for (int i = L; i <= R; i++) {
			int t = i;
			while (t > 0) {
				if (t % 10 == num)
					ans++;
				t /= 10;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}