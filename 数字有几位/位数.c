#include <stdio.h>

int main() {
	int n = 0;
	int x;
	scanf("%d", &x);
//0����һλ��
	while (x > 0) {
		n++;
		x /= 10;
	}
//	do {
//		x /= 10;
//		n++;
//	} while (x > 0);
//	�����ǿ���0��һλ����д��
	printf("%d", n);
}