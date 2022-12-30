#include <stdio.h>

int main() {
	char sen1[10002];
	char sen2[10002];
	while (scanf("%[^\n]%*c%[^\n]%*c", sen1, sen2) != EOF) {
		for (int i = 0; sen2[i] != 0; i++) {
			for (int j = 0; sen1[j] != 0; j++) {
				if (sen1[j] == sen2[i])
					sen1[j] = '\n';
			}
		}
		for (int i = 0; sen1[i] != 0; i++) {
			if (sen1[i] != '\n')
				printf("%c", sen1[i]);
		}
		printf("\n");
	}
	return 0;

}