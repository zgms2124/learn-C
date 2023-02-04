#include <stdio.h>
#include <string.h>

int main() {
	char sen1[66], sen2[66], ans[150];
	while (scanf("%s %s", sen1, sen2) != EOF) {
		int len1 = strlen(sen1), len2 = strlen(sen2);
		int len = len1 < len2 ? len1 : len2;
		//printf("%d", i);
		int temp = 0;
		int ansr = 0;
		for (int i = 0; i < len; i++) {
			ans[ansr++] = '0' + (sen1[len1 - i - 1] - '0' + sen2[len2 - i - 1] - '0' + temp) % 10;
			temp = (sen1[len1 - i - 1] - '0' + sen2[len2 - i - 1] - '0' + temp) / 10;
		}
		if (len1 > len2) {
			for (int i = 0; i < len1 - len2; i++) {
				ans[ansr++] = '0' + (sen1[len1 - len2 - i - 1] - '0' + temp) % 10;
				temp = (sen1[len1 - len2 - i - 1] - '0' + temp) / 10;
			}
		} else if (len2 > len1) {
			for (int i = 0; i < len2 - len1; i++) {
				ans[ansr++] = '0' + (sen2[len2 - len1 - i - 1] - '0' + temp) % 10;
				temp = (sen2[len2 - len1 - i - 1] - '0' + temp) / 10;
			}
		}
		if (temp != 0)
			ans[ansr++] = temp + '0';
		printf("%s + %s = ", sen1, sen2);
		for (int i = ansr - 1; i >= 0; i--) {
			printf("%c", ans[i]);
		}
		printf("\n");
	}
}