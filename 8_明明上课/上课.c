#include <stdio.h>

int main() {
	int max = 0;
	int t = 0;
	int day, time, time1, time2;
	for (day = 1; day < 8; day++) {
		scanf("%d %d", &time1, &time2);
		if (time1 + time2 > max) {
			max = time1 + time2;
			t = day;
		}

	}
	if (max <= 8)
		t = 0;
	if (t != 0) {
		printf("%d\n", t);
	} else
		printf("%d\n", 0);

}