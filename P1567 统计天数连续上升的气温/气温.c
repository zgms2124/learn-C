#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int day = 1;
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i + 1] > a[i]) {
			day++;

		} else {
			if (day > max)
				max = day;
			day = 1;
		}

	}
	if (day > max)
		max = day - 1;
	printf("%d", max);
	return 0;
}