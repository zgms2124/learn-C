#include <stdio.h>

int main() {
	char a[100];
	scanf("%s", a);
	for (int i = 0; i < 100; i++) {
		if (a[i] >= 97 && a[i] <= 122) {
			a[i] = a[i] - 32;
		}
	}
	printf("%s", a);
	return 0;
}