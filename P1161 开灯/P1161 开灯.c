#include <stdio.h>
//#include <stdbool.h>
//bool ass[2000001];

int main() {
//	int a = 3.1;
//	a /= 1;
//	printf("%d", a);
	int n, t, x;
	double a;
	int ass[500001];
	for (int i = 0; i < 500001; i++) {
		ass[i] = 0;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf %d", &a, &t);
		for (int j = 1; j <= t; j++) {
			x = a * j;
			if (ass[x - 1] == 0) {
				ass[x - 1] = 1;
			} else {
				ass[x - 1] = 0;
			}
		}

	}
	for (int i = 0; i < 500001; i++) {
		if (ass[i] == 1) {
			printf("%d", i + 1);
			break;
		}
	}

	return 0;
}