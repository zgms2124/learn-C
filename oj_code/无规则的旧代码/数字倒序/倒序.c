#include <stdio.h>

int main() {
	char a[100];
	int s, t, p;
	while (scanf("%s", a) != EOF) {
		s = 0;
		for (int i = 0; a[i] != 0; i++) {
			if (a[i] == '-')
				s = 1;
			t = i;
		}
		p = 0;
		if (s == 1)
			printf("-");
		for (int i = t; i >= 0; i--) {
			if (a[i] == '0' && p == 0) {
				continue;
			} else if (a[i] != '-') {
				p = 1;
				printf("%c", a[i]);
			}

		}
		printf("\n");
	}
	return 0;
}