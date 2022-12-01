#include <stdio.h>

int main() {
	char s[10], t[10];
	scanf("%[^!]", &s);
	getchar();
	scanf("%[^?]", &t);
	printf("%s\n%s", s, t);
	return 0;
}