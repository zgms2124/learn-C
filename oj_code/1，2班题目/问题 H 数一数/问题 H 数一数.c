#include <stdio.h>
#include <string.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		char sen[n][36];
		int b[n];
		int br = 0, senr = 0;
		scanf("%s", &sen[senr]);
		b[0] = 1;
		for (int i = 1; i < n; i++) {
			char tsen[36];
			scanf("%s", &tsen);
			int s = 1;
			for (int j = 0; j < i && s; j++) {
				if (strcmp(tsen, sen[j]) == 0) {
					b[j]++;
					s = 0;
					break;
				}
			}
			if (s) {
				b[++br] = 1;
				strcpy(sen[++senr], tsen);
			}
		}
		int max = 0;
		int maxi = 0;
		int anss = 1;
		for (int i = 0; i <= br; i++) {
			if (b[i] > max) {
				max = b[i];
				maxi = i;
			}
			if (b[i] == 2 || b[i] % 2 != 0) {
				anss = 0;
			}
		}
		printf("%s\n", sen[maxi]);
		if (anss)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}