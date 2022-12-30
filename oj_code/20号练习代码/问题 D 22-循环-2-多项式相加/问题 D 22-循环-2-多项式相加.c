#include <stdio.h>

int main() {
	int ans[10086] = {0};
	int	a, b;
	int max = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0;  i < a + b; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		ans[y] += x;
		if (y > max)
			max = y;
	}
	int min = 0;
	while (ans[min] == 0)
		min++;
	for (int i = max; i > min; i--) {
		if (ans[i] != 0)
			printf("%d %d\n", ans[i], i);
	}
	printf("%d %d", ans[min], min);
	return 0;
}