#include <stdio.h>

int main() {
	int a[10];
	for (int i = 0; i < 9; i++) {
		a[i] = 0;
	}
	printf("Enter a numder: ");
	int t;
	scanf("%d", &t);
	while (t > 0) {
		a[t % 10]++;
		t /= 10;
	}
	printf("Digit:      ");
	for (int i = 0; i <= 9; i++) {
		printf("   %d", i);
	}
	printf("\nOccurrences:");
	for (int i = 0; i < 10; i++) {
		printf("   %d", a[i]);
	}
	return 0;
}