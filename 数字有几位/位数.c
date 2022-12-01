#include <stdio.h>

int main() {
	int n = 0;
	int x;
	scanf("%d", &x);
//0不是一位数
	while (x > 0) {
		n++;
		x /= 10;
	}
//	do {
//		x /= 10;
//		n++;
//	} while (x > 0);
//	以上是考虑0是一位数的写法
	printf("%d", n);
}