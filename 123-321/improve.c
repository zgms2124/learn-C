#include <stdio.h>

int main() {
	int x, dig;
	int ret = 0;
	scanf("%d", &x);
	while (x > 0) {
		dig = x % 10;
		ret = ret * 10 + dig;
		x /= 10;
	}
	printf("%d", ret)
	;
	return 0;
}