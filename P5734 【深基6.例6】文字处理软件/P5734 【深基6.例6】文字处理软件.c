#include <stdio.h>

int main() {
	int n, a, s, b, c, i, j, k, l, t;
	char ass[400];
	char bss[100];
	scanf("%d", &n);
	scanf("%s", ass);
	while (n--) {
		scanf("%d", &a);
		s = 0;
		switch (a) {
			case 1:
				scanf("%s", bss);
				for (i = 0, j = 0; bss[j] != 0; i++) {
					if (s == 1) {
						ass[i] = bss[j];
						j++;
					}
					if (ass[i] == 0 && s == 0) {
						s = 1;
						i--;
					}

				}
				ass[i] = 0;
				printf("%s\n", ass);
				break;
			case 2:
				scanf("%d %d", &b, &c);
				for (i = b, j = 0; i < b + c; i++, j++) {
					ass[j] = ass[i];
				}
				for (i = j; ass[i] != 0; i++) {
					ass[i] = 0;
				}
				printf("%s\n", ass);
				break;
			case 3:
				scanf("%d %s", &b, bss);
				for (i = 0; bss[i] != 0; i++) {
					j = i + 1;
				}
				for (i = 0; ass[i] != 0; i++) {
					k = i;
				}
				for (i = k, l = k + j ; i >= b; i--, l--) {
					ass[l] = ass[i];
				}
				ass[k + j + 1] = 0;
				for (i = b, j = 0; bss[j] != 0; j++, i++) {
					ass[i] = bss[j];
				}
				printf("%s\n", ass);
				break;
			case 4:
				scanf("%s", bss);
				t = 0;
				for (i = 0, j = 0; ass[i] != 0 && bss[j] != 0; i++, j++) {
					if (bss[j] == ass[i]) {
						t = 1;
						if (j == 0)
							k = i;
					} else {
						i = i - j;
						t = 0;
						j = -1;
					}
				}
				if (t == 0)
					printf("-1\n");
				else
					printf("%d\n", k);
				break;
		}
	}
	return 0;
}