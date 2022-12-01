#include <stdio.h>

int main() {
	int a[10];
	int b[10];
	int i;
	for ( i = 0; i <= 9; i++) {
		scanf("%d", &a[i]);
		printf("%d", a[i]);
	}
	for ( i = 0; i <= 9; i++) {
		b[i] = a[i];
		printf("%d", b[i]);
	}
	return 0;
}