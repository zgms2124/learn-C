#include <stdio.h>

int main() {
	char sen[1000001];
	char word[11];
	int ge = 0, s = 0;
	int ans;
	scanf("%s", &word);
	getchar();
	getchar();
	scanf("%[^\n]", sen);
	int num = 0;
	for (int i = 0, j = 0; sen[i] != 0; i++, j++) {
		if (sen[i] == ' ') {
			if (word[j] == 0 && (sen[i - j - 1] == ' ' || i - j - 1 == -1)) {
				num++;
				if (s == 0) {
					ans = i - j;
					s = 1;
				}
			}
			j = -1;
		} else if ((sen[i] != word[j]) && (sen[i] != word[j] + 32) && (sen[i] != word[j] - 32)) {
			i = i - j + 1;
			j = -1;
			continue;
		}
	}
	if (num != 0)
		printf("%d %d\n", num, ans);
	else
		printf("-1\n");
	return 0;

}