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
	printf("�ܹ���%d��\n", n);
	printf("�༶������Ϊ%d\n", b);
	printf("��������%d��", x );
	return 0;
}