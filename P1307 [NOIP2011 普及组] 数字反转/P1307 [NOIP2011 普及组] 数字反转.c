#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int s = 0;
	if (n < 0) {
		s = 1;
		n = -n;
	}
	int sum = 0;
	while (n > 0) {
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (s == 0)
		printf("%d", sum);
	else
		printf("%d", -sum);
	return 0;
}