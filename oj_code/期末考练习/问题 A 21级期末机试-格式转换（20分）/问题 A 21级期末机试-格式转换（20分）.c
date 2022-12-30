#include <stdio.h>

int main() {
	int a1, a2, a3, a4, a5;
	char s[3];
	s[1] = 'M';
	s[2] = '\0';
	while (scanf("%d:%d,%d/%d/%d", &a1, &a2, &a3, &a4, &a5) != EOF) {
		if (a1 >= 12) {
			a1 -= 12;
			s [0] = 'P';
		} else
			s[0] = 'A';
		printf("%d%02d%02d,%02d:%02d%s\n", a5, a3, a4, a1, a2, s);
	}
	return 0;
}