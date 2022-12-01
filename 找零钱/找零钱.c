#include <stdio.h>
int main(void) {
	int price = 0;
	printf("请输入金额（元）：");
	scanf_s("%d", &price);
	int change = 100 - price;
	printf("找您%d元。\n", change);
	return 0;
}