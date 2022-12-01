#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;
	printf("请输入您的身高：");
	scanf("%lf", &a);
	printf("请输入您的体重：");
	scanf("%lf", &b);
	printf("您身体健康值为：(%lf)", a / b);
	return 0;
}