#include <stdio.h>

int main() {
	int n, day, ri;
	while (scanf("%d", &n) != EOF) {
		ri = 1;
		int a[7] = {0};
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int zou = 1;
			int year = 365;
			if (((1900 + i) % 4 == 0 && (1900 + i) % 100 != 0) || ((1900 + i) % 400 == 0))
				year = 366;
			for (int j = 1; j <= 12; j++) {
				switch (j) {
					case 1:
						day = 31;
						break;
					case 2:
						day = 28;
						break;
					case 3:
						day = 31;
						break;
					case 4:
						day = 30;
						break;
					case 5:
						day = 31;
						break;
					case 6:
						day = 30;
						break;
					case 7:
						day = 31;
						break;
					case 8:
						day = 31;
						break;
					case 9:
						day = 30;
						break;
					case 10:
						day = 31;
						break;
					case 11:
						day = 30;
						break;
					case 12:
						day = 31;
						break;
				}
				if (year == 366 && j == 2)
					day++;
				for (int k = 1; k <= day; k++) {
					if (k == 13)
						a[ri - 1]++;
					ri++;
					if (ri > 7)
						ri -= 7;
				}
			}
		}
		int i = 5, j = 7;
restart:
		for (i; i < j; i++)
			if (i != 4 || j == 7)
				printf("%d ", a[i]);
			else
				printf("%d", a[i]);
		i = 0;
		if (j == 7) {
			j = 5;
			goto restart;
		}
		printf("\n");

	}


	return 0;
}