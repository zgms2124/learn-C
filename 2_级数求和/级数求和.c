#include <stdio.h>

int main() {
	int k;
	int a = 1, n = 0;
	double S = 0;
	scanf("%d", &k);
	while (S <= k) {
		S = S + 1.0 / a;
		a++;
		n++;
	}
	printf("%d", n);
	return 0;
}