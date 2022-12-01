#include <stdio.h>

//char an2[] = {"abc"};
//char an3[] = {"def"};
//char an4[] = {"ghi"};
//char an5[] = {"jkl"};
//char an6[] = {"mon"};
//char an7[] = {"pqrs"};
//char an8[] = {"tuv"};
//char an9[] = {"xyz"};
char shou[] = {"adgjmptx"};
int main() {
	char sen[201];
	scanf("%[^('\n'&&'\r')]", sen);
	char an[8][5] = {
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz"
	};
	char *p1 = sen;
	int s, n;
	int num = 0;
	while (*p1) {
		s = 0;
		num++;
		if (*p1 != ' ') {
			for (int i = 0; i < 8 && s == 0; i++) {
				for (int j = 0; an[i][j] != 0 && s == 0; j++) {
					if (*p1 == an[i][j]) {
						num += j;
						s = 1;
					}
				}
			}
		}
		p1++;
	}
	printf("%d\n", num);
	return 0;
}
