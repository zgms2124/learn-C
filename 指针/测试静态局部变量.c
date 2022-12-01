#include <stdio.h>

char *ass() {
	static char r[] = {"love you"};
	return r;
}

int main() {
	char *p;
	p = ass();
	while (*p) {
		printf("%c", *p++);
	}
	return 0;
}