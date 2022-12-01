#include <stdio.h>

int main() {
	double a, b;
	while (scanf("%f %f", &a, &b) != EOF) {
		if (a > b)
			printf ("BIGGER\n");
		else if (a < b)
			printf ("SMALLER\n");
		else if (a == b)
			printf ("EQUAL\n");
	}
	return 0;
}