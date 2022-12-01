#include <stdio.h>

int main() {
	int a;
	int x, y, z;
	for ( a = 100; a < 1000; a++) {

		x = a / 100;
		y = a / 10 % 10;
		z = a % 10;
		if (x * x * x + y * y * y + z * z * z == a)
			printf ("%dÊÇË®ÏÉÊý\n", a);
	}
	return 0;
}