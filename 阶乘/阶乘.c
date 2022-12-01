#include <stdio.h>

int main() {
//	int x = 0, a = 1;
//	scanf("%d", &x);
//	while (x > 0) {
//		a = a * x;
//		x--;
//	}
//	printf("%d", a);


//	int b = 1;
//	int i = 1;
//	int a;
//	scanf("%d", &a);
//	while (i <= a) {
//		b *= i;
//		i++;
//	}
//  printf("%d", b);


//	int b = 1;
//	int i = 2;
//	int a;
//	scanf("%d", &a);
//	for (i; i <= a; i++) {
//		b *= i;
//	}
//	printf("%d", b);
	int x = 0, a = 1;
	scanf("%d", &x);
	for (int i = x; i >= 2; i--) {
		a *= i;
	}
	printf("%d", a);
	return 0;
}