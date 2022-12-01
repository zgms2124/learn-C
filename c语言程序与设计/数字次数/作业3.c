#include <stdio.h>

int main() {
	int a[10];
	int num, x;
	printf("Enter a numder: ");
	int t;
	while (1) {
		for (int i = 0; i < 10; i++) {
			a[i] = 0;
		}
		num = 0;
		scanf("%d", &t);
		if (t <= 0)
			break;
		x = t;
		while (t > 0) {
			if (a[t % 10] == 1)
				a[t % 10 ] = 2;
			if (a[t % 10 ] == 0)
				a[t % 10] = 1;
			t /= 10;
		}
		for (int i = 0; i < 10; i++) {
			if (a[i] == 2)
				num++;
		}
		if (num == 0)
			printf("No repeated digit!");
		else if (num == 1)
			printf("Repeated digit!");
		else
			printf("Repeated digits!");
		printf("\nEnter a numder: ");
	}
	return 0;
}