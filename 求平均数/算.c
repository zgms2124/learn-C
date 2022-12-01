#include <stdio.h>

int main() {
	int a = 0, m = 0, n = 0, sum = 0;
	float answer = 0;
	scanf("%d", &m);
	while (n < m) {
		scanf("%d", &a);
		sum += a;
		n++;
	}
	answer = sum / m;
	printf("%.1f", answer);
	return 0;
}