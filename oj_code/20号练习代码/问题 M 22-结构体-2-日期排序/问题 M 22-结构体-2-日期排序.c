#include <stdio.h>

typedef struct {
	int day;
	int month;
	int year;
} Date;

int cmp(Date a, Date b) {
	if (a.year > b.year)
		return 1;
	else if (a.year < b.year)
		return 0;
	else if (a.month > b.month)
		return 1;
	else if (a.month < b.month)
		return 0;
	else if (a.day > b.day)
		return 1;
	else if (a.day < b.day)
		return 0;
	else
		return 0;
}

int main() {
	int n;
	int year, day, month;
	while (scanf("%d", &n) != EOF) {
		Date alldate[n];
		for (int i = 0; i < n; i++) {
			scanf("%d/%d/%d", &alldate[i].month, &alldate[i].day, &alldate[i].year);
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (cmp(alldate[j], alldate[j + 1]) == 1) {
					Date t;
					t = alldate[j];
					alldate[j] = alldate[j + 1];
					alldate[j + 1] = t;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%02d/%02d/%04d\n", alldate[i].month, alldate[i].day, alldate[i].year);
		}
	}
	return 0;
}