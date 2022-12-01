#include <stdio.h>

int main() {
	float pai = 0, x = 1, a = 1;
	int t = 1;
	for (t; x >= 0.000001; t += 2) {
		x = 1.0 / t;
		if (x > 0)
			a = t;
		else
			a = -t;
		if ((t / 2) % 2 == 0) {
			pai += x;
		} else
			pai -= x;
	}
	pai *= 4;
	printf("%.16f", pai);
	return 0;
}