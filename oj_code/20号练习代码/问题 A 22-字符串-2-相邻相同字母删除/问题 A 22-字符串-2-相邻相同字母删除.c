#include <stdio.h>

int main() {
	char sen[100002];
	scanf("%s", sen);
	int s = 0;
	while (s == 0) {
		s = 1;
		for (int i = 0; sen[i] != 0; i++) {
			if (sen[i] == '0')
				continue;
			else {
				int j;
				for (j = i + 1; sen[j] != 0; j++) {
					if (sen[j] != '0')
						break;
				}
				if (sen[i] == sen[j]) {
					s = 0;
					sen[i] = '0';
					sen[j] = '0';
					i = j;
				}
			}
		}
	}
	for (int i = 0; sen[i] != 0; i++) {
		if (sen[i] != '0')
			printf("%c", sen[i]);
	}
	return 0;
}