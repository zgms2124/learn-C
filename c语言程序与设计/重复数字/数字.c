#include <stdio.h>

int main() {
	int a[10];
	int num = 0;
	for (int i = 0; i < 10; i++) {
		a[i] = 0;
	}
	printf("Enter a numder: ");
	int t;
	scanf("%d", &t);
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
	else if ( num == 1) {
		printf("Repeated digit:");
		for (int i = 0; i < 10; i++) {
			if (a[i] == 2)
				printf(" %d", i );
		}
	} else {
		printf("Repeated digits:");
		for (int i = 0; i < 10; i++) {
			if (a[i] == 2)
				printf(" %d", i);
		}
	}

	return 0;
}