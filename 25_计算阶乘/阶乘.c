#include <stdio.h>
long double jiecheng(int a);

int main() {
	long double sum = 0;
	for (int i = 1; i <= 20; i++) {
		sum += jiecheng(i);
	}
	printf("%Ld\n", sum);
	return 0;
}

long double jiecheng(int a) {
	long double sum = 1;
	for (int i = 2; i <= a; i++) {
		sum *= i;
	}
	return sum;
}