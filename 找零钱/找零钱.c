#include <stdio.h>
int main(void) {
	int price = 0;
	printf("�������Ԫ����");
	scanf_s("%d", &price);
	int change = 100 - price;
	printf("����%dԪ��\n", change);
	return 0;
}