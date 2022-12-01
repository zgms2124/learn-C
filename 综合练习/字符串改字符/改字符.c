#include <stdio.h>

int main() {
	char a[40];
	int i = 0;
	int n;
	while (scanf("%s", a) != EOF) {
		for (i = 0; i < 40; i++) {
			if (a[i] == 'e')
				a[i] = 'E';
			if (a[i] == 'r')
				a[i] = 'R';
			if (a[i] == 'n')
				a[i] = 'N';
			if (a[i] == 'M')
				a[i] = 'm';
			if (a[i] == 'I')
				a[i] = 'i';
			if (a[i] == 'K')
				a[i] = 'k';
			if (a[i] == 'A')
				a[i] = 'a';
			if (a[i] == 'S')
				a[i] = 's';
		}
		printf("%s\n", a);
	}
	return 0;
}