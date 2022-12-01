#include <stdio.h>

int main() {
	int n, j, r = 0;
	char ch;
	scanf("%d", &n);
	char ass[n ][n + 1];
	char bss[n ][n + 1];
	char css[n][n + 1];
	char dss[n][n + 1];
//	for (int i = 0; i < n; i++) {
//		j = 0;
//		ch = getchar();
//		while (ch == '\r' && ch == '\n') {
//
//		}
//		ass[i] = ch;
//	}

//	for (int i = 0; i < n; i++) {
//		j = 0;
//		ch = getchar();
//		while (ch == '\r' && ch == '\n') {
//			break;
//		}
//		bss[i] = ch;
//	}
	for (int i = 0; i < n; i++) {
		scanf("%s", ass[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%s", bss[i]);
	}
	int s = 1;
	while (1) {
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = ass[i][j];
				css[n - i - 1][n - j - 1] = ass[j][n - i - 1];
				css[n - j - 1][i] = ass[n - i - 1][n - j - 1];
				css[i][j] = ass[n - j - 1][i];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])

					goto s2;
			}
		}
		s = 1;
		break;

s2:
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = ass[n - j - 1][i];
				css[n - i - 1][n - j - 1] = ass[i][j];
				css[n - j - 1][i] = ass[j][n - i - 1];
				css[i][j] = ass[n - i - 1][n - j - 1];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s3;
			}
		}
		s = 2;
		break;

s3:
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = ass[n - i - 1][n - j - 1];
				css[n - i - 1][n - j - 1] = ass[n - j - 1][i];
				css[n - j - 1][i] = ass[i][j];
				css[i][j] = ass[j][n - i - 1];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s4;
			}
		}
		s = 3;
		break;

s4:
		for (int i = 0; i < n; i++) {

			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = ass[j][i];
				css[n - i - 1][n - j - 1] = ass[n - i - 1][j];
				css[n - j - 1][i] = ass[n - j - 1][n - i - 1];
				css[i][j] = ass[i][n - j - 1];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s5;
			}
		}
		s = 4;
		break;

s5:
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = ass[j][i];
				css[n - i - 1][n - j - 1] = ass[n - i - 1][j];
				css[n - j - 1][i] = ass[n - j - 1][n - i - 1];
				css[i][j] = ass[i][n - j - 1];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				dss[i][j] = css[i][j];
			}

		}

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = dss[i][j];
				css[n - i - 1][n - j - 1] = dss[j][n - i - 1];
				css[n - j - 1][i] = dss[n - i - 1][n - j - 1];
				css[i][j] = dss[n - j - 1][i];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s6;
			}
		}
		s = 5;
		break;

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = dss[n - j - 1][i];
				css[n - i - 1][n - j - 1] = dss[i][j];
				css[n - j - 1][i] = dss[j][n - i - 1];
				css[i][j] = dss[n - i - 1][n - j - 1];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s6;
			}
		}
		s = 5;
		break;

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				css[j][n - i - 1] = dss[n - i - 1][n - j - 1];
				css[n - i - 1][n - j - 1] = dss[n - j - 1][i];
				css[n - j - 1][i] = dss[i][j];
				css[i][j] = dss[j][n - i - 1];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s6;
			}
		}
		s = 5;
		break;

s6:

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n + 1; j++) {
				if (css[i][j] != bss[i][j])
					goto s7;
			}
		}
		s = 6;
		break;

s7:
		s = 7;
		break;
	}

	printf("%d\n", s);

	return 0;
}