#include <stdio.h>

int main() {
	int a, b;
	int max = 0;
	scanf("%d %d", &a, &b);
	int min1 = a;
	int min2 = b;
	int t;
	for (int i = 1; i <= a * b; i++) {
		min1 = a * i;
		if (min1 == min2) {
			printf ("最小公倍数是%d\n", min1);
			break;
		}
		for (int j = 2; min1 > min2; j++) {
			min2 = b * j;
			if (min1 == min2) {

				printf("最小公倍数是%d\n", min2);
				i = a * b;
			}
		}

	}
	if (a > b)
		t = a;
	else
		t = b;
	for (int i = t; i > 1; i--) {
		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
			max = i;
		}
	}
	printf("最大公约数是%d\n", max);

	return 0;


}