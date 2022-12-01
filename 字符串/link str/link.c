#include <stdio.h>

char *strlink(char *sen1, char *sen2) {
	char *t = sen1;
	int i = 0, j = 0;
	while (sen1[i] != 0) {
		i++;
	}
	while (sen2[j] != 0) {
		sen1[i++] = sen2[j++];
	}
	sen1[i] = '\0';
	return t;
}

int main() {
	char s1[8] = "abc";
	char s2[4] = "def";
	strlink(s1, s2);
	printf("%s", s1);
}