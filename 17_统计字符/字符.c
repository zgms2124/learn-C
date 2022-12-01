#include <stdio.h>

int main() {
	char ch;
	int zimu = 0, kongge = 0, shuzi = 0, qita = 0;
	do {
		ch = getchar();
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
			zimu++;
		} else if (ch >= '0' && ch <= '9') {
			shuzi++;
		} else if (ch == ' ') {
			kongge ++;
		} else if (ch != '\n')
			qita++;

	} while (ch != '\n');
	printf("%d %d %d %d", zimu, shuzi, kongge, qita);
	return 0;

}
