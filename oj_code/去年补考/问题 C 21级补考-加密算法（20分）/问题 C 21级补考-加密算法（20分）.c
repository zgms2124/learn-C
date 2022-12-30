#include <stdio.h>
#include <string.h>

int main() {
	char sen[1005];
	while (scanf("%s", sen) != EOF) {
		for (int i = strlen(sen) ; i >= 0; i--) {
			printf("%d", i);
		}
		printf("\n");

	}
	return 0;
}