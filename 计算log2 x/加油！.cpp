#include <stdio.h>

int main() {
//	int x;
//	int M = 1, n = 0;
//	scanf("%d", &x);
//	while (n < x) {
//		M *= 2;
//		n++;
//	}
//	printf("%d", M);
//	int x;
//	int M = 1, n = 0;
//	scanf("%d",&x);
//	while (x!=1);
	int x;
	scanf("%d", &x);
	int ret = 0;
	while (x > 1) {
		x /= 2;
		ret++;
	}
	printf("%d", ret);

}