#include <stdio.h>

int main() {
	long a, b, i;
	//�ĳ�int��ʽ���ܶ౾Ӧ��ʾnone�Ľ�������65536��Ϊʲô�أ�
	while (scanf("%ld %ld", &a, &b) != EOF) {
		int s = 0;
		for (i = 1; i < a * a && i < b * b; i++) {
			if (a * a == b * b + i * i || b * b == a * a + i * i || i * i == a * a + b * b) {
				s = 1;
				break;
			}
		}
		if (s == 1)
			printf("%ld\n", i);
		else
			printf("None\n");
	}
	return 0;
}