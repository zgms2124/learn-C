#include <stdio.h>

int main() {
	double a;
	while (scanf("%lf", &a) != EOF) {
		if (a > 7000)
			a = 230 + (a - 7000) * 0.06;
		else if (a > 5250)
			a = 142.5 + (a - 5250) * 0.05;
		else if (a > 3750)
			a = 82.5 + (a - 3750) * 0.04;
		else if (a > 2250)
			a = 37.5 + (a - 2250) * 0.03;
		else if (a > 750)
			a = 7.5 + (a - 750) * 0.02;
		else
			a = a * 0.01;
		printf("%.2lf\n", a);
	}
	return 0;
}