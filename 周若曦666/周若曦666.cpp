#include <stdio.h>

int main() {
	int m = 0, x = 0, b = 0;
	int a, n;
	scanf("%d", &n);
	while (m < n) {
		scanf("%d", &a);
		if (a > b) {
			b = a;
			x = 1;
		} else {
			b = b;
			x ++;
		}
		m++;
	}
	printf("总共有%d人\n", n);
	printf("班级最高身高为%d\n", b);
	printf("最高身高有%d人", x );
	return 0;
}