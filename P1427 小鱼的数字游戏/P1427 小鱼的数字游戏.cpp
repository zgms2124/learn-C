#include <stdio.h>

int main() {
	int a[101];
	int i = 0;
	do {
		scanf("%d", &a[i]);
		i++;
	} while (a[i - 1] != 0);
	for (int j = i - 2; j >= 0; j--) {
		printf("%d ", a[j]);
	}
	return 0;
}