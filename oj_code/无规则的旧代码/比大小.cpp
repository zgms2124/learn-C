#include <stdio.h>

int main() {
	int a;
	while (scanf("%d %d", &a) != EOF) {
		if (a > b)
			printf ("BIGGER\n");
		else if (a < b)
			printf ("SMALLER\n");
		else if (a == b)
			printf ("EQUAL\n");
	}
	return 0;
}

