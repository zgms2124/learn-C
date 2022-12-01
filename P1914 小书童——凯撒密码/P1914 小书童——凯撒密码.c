#include <stdio.h>

int main() {
	char a[50];
	int n;
	scanf("%d", &n);
	scanf("%s", a);
	for (int i = 0; a[i] != 0; i++) {
		if (a[i] + n <= 122) {
			a[i] = a[i] + n;
		} else {
			a[i] = 97 + (a[i] + n - 123);
		}
	}
	printf("%s", a);
	return 0;
}