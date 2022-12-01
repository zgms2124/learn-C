#include <stdio.h>

int main() {
	int a;
	int t;
	scanf("%d", &a);
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			t = a / i;
			printf ("%d", t);
			break;
		}
	}
	return 0;
}
//计算最小约数比最大约数快！！！！！！！！！！！