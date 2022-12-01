#include <stdio.h>

int main() {
	int x = 0, h = 0;
	int a[10];
	scanf("%d", &h);
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int n = 0; n < 10; n++) {
		if (h + 30 >= a[n])
			x++;
	}

	printf("%d", x);
	return 0;
}