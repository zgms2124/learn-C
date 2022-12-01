#include <stdio.h>

int main() {
	int n;
	char ch;
	int a = 1;
	while (scanf("%d", &n) != EOF) {
		a = 1;
		char sen[n];
		scanf("%s", sen);
		for (int i = 0; i < n; i++) {
			ch = sen[i];
			if (ch == 'L')
				a--;
			if (ch == 'R')
				a++;
			if (a > 4)
				a = 1;
			if (a < 1)
				a = 4;
		}
		switch (a) {
			case 1:
				printf("N\n");
				break;
			case 2:
				printf("E\n");
				break;
			case 3:
				printf("S\n");
				break;
			case 4:
				printf("W\n");
				break;
		}
	}
	return 0;
}