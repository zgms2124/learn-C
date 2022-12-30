#include <stdio.h>

int main() {
	char s[31];
	int a[5];
	while (scanf("%s", s) != EOF) {
		for (int i = 0; i < 5; i++) {
			a[i] = 0;
		}
		int len;
		for (int i = 0; s[i] != 0; i++) {
			len = i + 1;
		}
		if (len >= 8)
			a[0] = 1;
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				a[1] = 1;
				break;
			}
		}
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				a[2] = 1;
				break;
			}
		}
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				a[3] = 1;
				break;
			}
		}
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '*' || s[i] == '~') {
				a[4] = 1;
				break;
			}
		}
		int ans = 0;
		for (int i = 1; i < 5; i++) {
			if (a[i] == 1) {
				ans++;
			}
		}
		if (a[0] == 0)
			ans = 0;
		if (ans >= 3 )
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}