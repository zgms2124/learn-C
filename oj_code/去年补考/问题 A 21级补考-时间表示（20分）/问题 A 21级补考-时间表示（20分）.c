#include <stdio.h>

int main() {
	int time;
	while (scanf("%d", &time) != EOF) {
		int hour = 0, min = 0, sec = 0;
		if (time >= 3600) {
			hour = time / 3600;
			time %= 3600;
		}
		if (time >= 60) {
			min = time / 60;
			time %= 60;
		}
		sec = time;
		printf("%d:%d:%d\n", hour, min, sec);
	}
	return 0;
}