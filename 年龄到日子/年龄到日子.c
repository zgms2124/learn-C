#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("请输入您的年龄：\n");
	scanf_s("%d", &a);
	b = a * 365;
	printf("您活了%d天",b);
}