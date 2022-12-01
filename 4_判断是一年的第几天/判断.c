#include <stdio.h>

int main() {
	int year, Y, day = 0, b, c;
	scanf("%d %d %d", &year, &b, &c);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		for (int i = 1; i < b; i++) {
			switch (i) {
				case 1:
					day += 31;
					break;
				case 2:
					day += 29;
					break;
				case 3:
					day += 31;
					break;
				case 4:
					day += 30;
					break;
				case 5:
					day += 31;
					break;
				case 6:
					day += 30;
					break;
				case 7:
					day += 31;
					break;
				case 8:
					day += 31;
					break;
				case 9:
					day += 30;
					break;
				case 10:
					day += 31;
					break;
				case 11:
					day += 30;
					break;
				case 12:
					day += 31;
					break;
			}
		}
		day += c;
		printf ("%d", day);
	} else {
		for (int i = 1; i < b; i++) {
			switch (i) {
				case 1:
					day += 31;
					break;
				case 2:
					day += 28;
					break;
				case 3:
					day += 31;
					break;
				case 4:
					day += 30;
					break;
				case 5:
					day += 31;
					break;
				case 6:
					day += 30;
					break;
				case 7:
					day += 31;
					break;
				case 8:
					day += 31;
					break;
				case 9:
					day += 30;
					break;
				case 10:
					day += 31;
					break;
				case 11:
					day += 30;
					break;
				case 12:
					day += 31;
					break;
			}
		}
		day += c;
		printf ("%d", day);
	}
	return 0;
}