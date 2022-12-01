#include <stdio.h>

int main(void) {
	int ages, days;
	ages = 0;
	printf("请输入你的年龄：");
	scanf("%d", ages);
	days = ages * 365;
	printf("你成长天数为%d", days);
	return 0;

}