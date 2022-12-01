#include <stdio.h>

int main() {
	char a[100];
	scanf("%s", a);
	int t;
	int num[26] = {0};
	for (int i = 0; a[i] != 0; i++) {
		t = a[i] - 97;
		num[t]++;
	}
	int max = num[0];
	int min;
	for (int i = 0; i < 26; i++) {
		if (i != 0)
			min = i;
	}
	for (int i = 1; i < 26; i++) {
		if (num[i] > max)
			max = num[i];
		if (num[i] < min && num[i] != 0)
			min = num[i];
	}
	int s = 1;
	int x = max - min;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			s = 0;
			break;
		}
	}
	if (x == 0 || x == 1) {
		s = 0;
	}
	if (s == 1) {
		printf("Lucky Word\n");
		printf("%d", x);
	} else {
		printf("No Answer\n");
		printf("0");
	}
	return 0;
}