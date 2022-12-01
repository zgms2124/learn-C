#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[3][2];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	int money[3];
	int num;
	for (int i = 0; i < 3; i++) {
		num = n / a[i][0];
		if (n % a[i][0] != 0)
			num++;
		money[i] = num * a[i][1];

	}
	int min = money[0];
	for (int i = 1; i < 3; i++) {
		if (money[i] < min)
			min = money[i];
	}
	printf("%d\n", min);

	return 0;
}