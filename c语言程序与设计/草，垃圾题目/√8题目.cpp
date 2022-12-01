#include <stdio.h>

int main() {
	int a, b, T ;
	while (scanf("%d:%d", &a, &b) != EOF) {
		T = a * 60 + b;
		if (T > 1222) {
			printf ("9:45p.m. to 11:58p.m.");
		} else if (T > 1042) {
			printf ("7:00p.m. to 9:20p.m.");
		} else if (T > 892) {
			printf ("3:45p.m. to 5:55p.m.");
		} else if (T > 803) {
			printf ("2:00p.m. to 4:08p.m.");
		} else if (T > 723) {
			printf ("12:47p.m. to 3:00p.m.");
		} else if (T > 631) {
			printf ("11:19a.m. to 1:31a.m.");
		} else if (T > 531) {
			printf ("9:43a.m. to 11:52a.m.");
		} else {
			printf ("8:00a.m. to 10:16a.m.");
		}

	}

	return 0;
}