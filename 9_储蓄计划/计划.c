#include <stdio.h>

int main() {
	int count, s = 0;
	int left = 0, rate = 0;
	int t, i;
	for (i = 1; i < 13; i++) {
		scanf("%d", &count);
		if (left + 300 >= count) {
			left = left + 300;
			left = left - count;
			if (left >= 100) {
				rate = rate + (left) / 100 * 100;
				left = left - left / 100 * 100;
			}
		} else {
			s = 1;
			break;
		}
	}

	if (s == 0) {
		t = rate * 1.2 + left;
		printf("%d", t);

	} else {
		t = left + 300 - count;
		printf("%d", -i);
	}
	return 0;
}