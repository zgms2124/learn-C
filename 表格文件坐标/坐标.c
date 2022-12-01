#include <stdio.h>

int main() {
	int n;
	char a[20];
	scanf("%d", &n);
	int s, t, s1, t2, t3;
	int x, y;
	int i, j, r;
	int zimu[10];
	for ( r = 0; r < n; r++) {
		x = 0, y = 0;
		s = 0, s1 = 0;
		scanf("%s", a);
		for (j = 0; a[j] != 0; j++) {
			if (a[j] >= 48 && a[j] <= 57 && s == 0) {
				s = 1;
				if (s1 == 0) {
					t = j;
					s1 = 1;
				}
			}
			if (a[j] > 57 && s == 1) {
				s = 2;
			}
		}
		if (s == 1) {
			for (i = 0; a[i] != 0; i++) {
				if (i < t)
					y = y * 26 + (a[i] - 64);
				else
					x = x * 10 + (a[i] - 48);
			}
		} else {
			for (i = 1; a[i] <= 57; i++) {
				x = x * 10 + (a[i] - 48);
			}
			for (i++; a[i] != 0; i++) {
				y = y * 10 + (a[i] - 48);
			}
			i = 0;
			while (y > 26) {
				t2 = 0;
				zimu[i] = y % 26;
				i++;
				if (y % 26 == 0) {
					t2 = 1;
				}
				y = y / 26;
				if (t2 == 1)
					y--;
			}
			zimu[i] = y;
		}
		char zhimu[10];
		for (int l = 0, k = i; k >= 0; k--, l++) {
			if (zimu[k] != 0)
				zhimu[l] = 'A' + zimu[k] - 1;
			else
				zhimu[l] = 'Z';
		}
		if (s == 1)
			printf("R%dC%d\n", x, y);
		else {
			for (int k = 0; k <= i; k++) {
				printf("%c", zhimu[k]);
			}
			printf("%d\n", x);
		}

	}
	return 0;

}