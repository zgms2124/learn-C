#include <stdio.h>

int main() {
	char s[5], ch;
	int i = 0;

	while (1) {
		ch = getchar();
		if (ch != '\n') {
			if (ch != ' ')
				i++;
		} else
			break;
	}
	printf("%d", i);
}