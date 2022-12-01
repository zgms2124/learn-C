#include <stdio.h>
#include <string.h>

void gp() {
	int ch;
	while ((ch = getchar()) != EOF) {
		printf("%c", ch);
	}
	printf("EOF");
}

void sck() {
	char sen[10];
	scanf("%[^' ']", sen);
	printf("%s", sen);
}

int mycmp(const char *a1, const char *a2) {
//	int num = 0;
	while (*a1 == *a2 && *a1 != 0) {
//		if (a1[num] != a2[num])
//			break;
//		else if (a1[num] == 0)
//			break;
//		num++;
		a1++;
		a2++;
	}
//	return a1[num] - a2[num];
	return *a1 - *a2;
}

void sencmp() {
	char a1[] = "abc";
	char a2[] = "aBc";
//	printf("%d", a1 == a2);
	printf("%d\n", mycmp(a1, a2));
	printf("%d", 'a' - 'A');
}

int main() {
	sencmp();
	return 0;
}