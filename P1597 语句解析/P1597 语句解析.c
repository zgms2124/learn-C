#include <stdio.h>

int main() {
//	char sen[52][5];
	char sen[255];
	char ch;
	int a = 0, b = 0, c = 0;
	int i = 0, j = 0;
	scanf("%s", sen);
	for (int r = 0; sen[r] != 0; r += 5)
		if (sen[0] == 'a') {
			if (sen[3] <= '9')
				a = sen[3] - '0';
			else {
				if (sen[3] == 'a') {
					a = a;
				}
				if (sen[3] == 'b') {
					a = b;
				}
				if (sen[3] == 'c') {
					a = c;
				}
			}
		}
	if (sen[0] == 'b') {
		if (sen[3] <= '9')
			b = sen[3] - '0';
		else {
			if (sen[3] == 'a') {
				b = a;
			}
			if (sen[3] == 'b') {
				b = b;
			}
			if (sen[3] == 'c') {
				b = c;
			}
		}
	}
	if (sen[0] == 'c') {
		if (sen[3] <= '9')
			c = sen[3] - '0';
		else {
			if (sen[3] == 'a') {
				c = a;
			}
			if (sen[3] == 'b') {
				c = b;
			}
			if (sen[3] == 'c') {
				c = c;
			}
		}
	}
	j = 0;


	printf("%d %d %d", a, b, c);
	return 0;
}