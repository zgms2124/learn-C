#include <stdio.h>
#include <string.h>

int main() {
	char sen[86];
	while (scanf("%s", sen) != EOF) {
		int length = strlen(sen);
		for (int i = 0; i < length; i++) {
			if (sen[i] >= 'a' && sen[i] <= 'z') {
				sen[i] = 'z' - (sen[i] - 'a');
			} else if (sen[i] >= 'A' && sen[i] <= 'Z') {
				sen[i] = 'Z' - (sen[i] - 'A');
			}
		}
		printf("%s\n", sen);
	}
	return 0;
}