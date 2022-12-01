#include <stdio.h>

void jiami(char *sen, int len) {
	for (len--; len >= 0; len--) {
		printf("%c", sen[len]);
	}
}

int main() {
	char sen[1000];
	int len = 0;
	scanf("%s", sen);
	while (sen[len] != 0)
		len++;
	jiami(sen, len);
	return 0;
}