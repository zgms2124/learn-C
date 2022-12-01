#include <stdio.h>

int main() {
	double d, h;
	double PI = 3.141592653589793;
	double s, v;
	while (scanf("%lf %lf", &d, &h) != EOF) {
		s = 2 * PI * (d / 2) * (d / 2) + PI * d * h;
		v = PI * (d / 2) * (d / 2) * h;
		printf("%.10f %.10f\n", s, v);

	}
	return 0;
}