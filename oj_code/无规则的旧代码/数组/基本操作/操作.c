#include <stdio.h>

int main() {
	int m, n;
	int t = 0;
	scanf("%d %d", &n, &m);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0], min = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (t != 3) {
			if (i + 1 != n) {
				printf("%d ", a[i]);
				t++;
			} else
				printf("%d\n", a[i]);

		} else {
			printf("%d\n", a[i]);
			t = 0;
		}
	}
	float average = 0;
	for (int i = 0; i < n; i++) {
		average = average + a[i];
	}
	average /= n;
	printf("max:%d\n", max);
	printf("min:%d\n", min);
	printf("average:%.6f\n", average);
}