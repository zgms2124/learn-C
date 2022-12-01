#include <stdio.h>

int main() {
	char sen[1000];
	while (scanf("%s", sen) != EOF) {
		for (int i = 0; sen[i] != 0; i++) {
			if (sen[i] == 'T')
				sen[i] = 'U';
		}
		printf("%s\n", sen);
	}
	return 0;
}