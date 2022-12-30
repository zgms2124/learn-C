#include <stdio.h>

int main() {
	char s[51];
	while (scanf("%s", s) != EOF) {
		int zimu[26];
		for (int i = 0; i < 26; i++) {
			zimu[i] = 0;
		}
		int len = 0;
		int ans = 1;
		for (len; s[len] != 0; len++);
		for (int i = 0; i * 2 < len; i++) {
			zimu[s[i] - 'a']++;
			if (s[i] != s[len - i - 1]) {
				ans = 0;
				break;
			}
		}
		int num = 0;
		if (ans == 0)
			printf("NO\n");

		else {
			for (int i = 0; i < 26; i++) {
				if (zimu[i] != 0)
					num++;
			}
			printf("YES %d\n", num);
		}
	}
	return 0;
}