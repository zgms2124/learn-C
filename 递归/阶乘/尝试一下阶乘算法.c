#include <stdio.h>
int jiecheng(int a);

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", jiecheng(a));
	return 0;
}

int jiecheng(int a) {
	int sum = 1;
	if (a > 0) {
		sum = a * jiecheng(a - 1);
	} else
		return sum;
}