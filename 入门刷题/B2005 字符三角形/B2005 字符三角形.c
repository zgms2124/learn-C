#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);
	for (int i = 0; i < 2; i++) {
		printf(" ");
	}
	printf("%c\n ", ch);
	for (int i = 0; i < 3; i++) {
		printf("%c", ch);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%c", ch);
	}
	return 0;
}