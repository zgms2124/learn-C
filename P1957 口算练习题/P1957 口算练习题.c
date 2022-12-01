#include <stdio.h>
//#define a "+"
//#define b "-"
//#define c "*"
//#define d "/"

int main() {
	int n, x, j, i, t, bei, r;
	scanf("%d", &n);
	char bss[n];
	int css[n];
	char ass[n][20];
	char ch;
	getchar();
	getchar();
	for (i = 0; i < n; i++, getchar()) {
		x = 1;
		j = 0;
		do {
//			scanf("%[^(' '||'\n')]", ass[i][j]);
			ch = getchar();
			if (ch != '\n' && ch != '\r') {
				ass[i][j] = ch;
				j++;
			}
			if (ch == ' ')
				x++;
			css[i] = j;
		} while (ch != '\n' && ch != '\r');
		if (x == 3) {
			bss[i] = ass[i][0];
		} else {
			bss[i] = bss[i - 1];
		}
	}
	for (i = 0; i < n; i++) {
		t = 2;
//		for (j = 0; ass[i][j] >= 48 && ass[i][j] <= 57; j++) {
//			printf("%c", ass[i][j]);
//			t++;
//		}
//		printf("%c", bss[i]);
//		t++;
//		for (j++; ass[i][j] >= 48 && ass[i][j] <= 57; j++) {
//			printf("%c", ass[i][j]);
//			t++;
//		}
//		printf("=");
//		t++;
		bei = 1;
		int p = 0, q = 0, r = 0;
		j = css[i] - 1;
		for (j; ass[i][j] >= 48 && ass[i][j] <= 57; j--) {
			q = q + (ass[i][j] - 48) * bei;
			bei *= 10;
		}
		bei = 1;
		for (--j; ass[i][j] >= 48 && ass[i][j] <= 57; j--) {
			p = p + (ass[i][j] - 48) * bei;
			bei *= 10;
		}
		if (bss[i] == 'a') {
			r = p + q;
			ch = '+';
		} else if (bss[i] == 'b') {
			r = p - q;
			ch = '-';
		} else if (bss[i] == 'c') {
			r = p * q;
			ch = '*';
		} else if (bss[i] == 'd') {
			r = p / q;
			ch = '/';
		}
		printf("%d%c%d=%d", p, ch, q, r);
		if (r < 0) {
			t++;
			r = -r;
		}
		if (r == 0)
			t++;
		while (r > 0) {
			r /= 10;
			t++;
		}
		if (p == 0)
			t++;
		while (p > 0) {
			p /= 10;
			t++;
		}
		if (q == 0)
			t++;
		while (q > 0) {
			q /= 10;
			t++;
		}
		printf("\n%d\n", t);

	}


//	for (int i = 0; i < n; i++) {
//		for (int j = 0; ass[i][j] != 0; j++) {
//			printf("%c ", ass[i][j]);
//		}
//		printf("%s\n", ass[i]);
//	}
	return 0;
}