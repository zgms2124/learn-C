#include <stdio.h>

int main() {
	int x;
	int a[9];
	while (scanf("%d", &x) != EOF) {
//		for (int i = 0; i < 9; i++) {
//			a[i] = 0;
//		}
		int i;
		int n = 0;
		for (i = 0; x > 0; i++) {
			if (x % 2 == 1) {
				n++;
			}
//			a[i] = x % 2;
			x = x / 2;
		}

//		for (int k = 0; k < 9; k++) {
//			if (a[k] == 1) {
//
//				n++;
//			}
//		}
		if (n % 2 == 0)
			printf ("Yes\n");
		else
			printf ("No\n");
//		printf ("\n%d\n", x);

	}
	return 0;
}