#include <stdio.h>

int main() {
	char sen[25];
	char ans[25];
	char ans1[12];
	char ans2[12];
	scanf("%s", sen);
	int s = 0;
	int s1 = 0, s2 = 0;
	int k, k1, k2;
	int stone;
	int type = 1;
	int i, j, l;
	for (i = 0; sen[i] != 0; i++) {
		if (sen[i] == '.') {
			stone = i;
			type = 2;
		}
		if (sen[i] == '/') {
			stone = i;
			type = 3;
		}
		if (sen[i] == '%') {
			stone = i;
			type = 4;
		}
	}
	int q = type;
	for (int r = 0; sen[r] != 0; r++) {
		if (sen[r] != '0') {
			if (sen[r] != '%')
				goto gg;
		}

	}
	type = 0;
	if (type == 0) {
		if (q == 1) {
			printf("0");
		} else
			printf("0%%");
	}
gg:
	switch (type) {
		case 1:
			for (k = 0, j = i - 1; j >= 0; j--) {
				if (sen[j] != '0' && s == 0) {
					s = 1;
				}
				if (s == 1) {
					ans[k] = sen[j];
					k++;
				}
			}
			for (i = 0; i < k; i++) {
				printf("%c", ans[i]);
			}
			break;
		case 2:
			for (k1 = 0, j = stone - 1; j >= 0; j--) {
				if (sen[j] != '0' && s == 0) {
					s = 1;
				}
				if (s == 1) {
					ans1[k1] = sen[j];
					k1++;
				}
			}
			for (l = 0; l < k1; l++) {
				printf("%c", ans1[l]);
			}
			if (k1 == 0)
				printf("0");
			for (k2 = 0, j = i - 1; j > stone; j--, k2++) {
				ans2[k2] = sen[j];
			}
			printf(".");
			for (l = k2 - 1; l >= 0; l--) {
				if (ans2[l] != '0') {
					break;
				}
			}
			if (l == -1)
				printf("0");
			else {
				for (i = 0; i <= l; i++) {
					printf("%c", ans2[i]);
				}
			}
			break;
		case 3:
			for (k1 = 0, j = stone - 1; j >= 0; j--) {
				if (sen[j] != '0' && s == 0) {
					s = 1;
				}
				if (s == 1) {
					ans1[k1] = sen[j];
					k1++;
				}
			}
			for (l = 0; l < k1; l++) {
				printf("%c", ans1[l]);
			}
			s = 0;
			for (k2 = 0, j = i - 1; j > stone; j--) {
				if (sen[j] != '0' && s == 0) {
					s = 1;
				}
				if (s == 1) {
					ans2[k2] = sen[j];
					k2++;
				}
			}
			if (k1 == 0)
				printf("0");
			printf("/");
			for (l = 0; l < k2; l++) {
				printf("%c", ans2[l]);
			}
			break;
		case 4:
			for (k = 0, j = i - 2; j >= 0; j--) {
				if (sen[j] != '0' && s == 0) {
					s = 1;
				}
				if (s == 1) {
					ans[k] = sen[j];
					k++;
				}
			}
			for (i = 0; i < k; i++) {
				printf("%c", ans[i]);
			}
			printf("%%");
			break;
	}
	return 0;
}