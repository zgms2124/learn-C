#include <stdio.h>

int main() {
	char sen[100000];
	int j;
	int zuo, you;
	int zuow[50000];
	int shu[50000];
	int youw[50000];
	int ge;
	while (scanf("%s", sen) != EOF) {
		int kr = 0, kl = 0;
		zuo = 0;
		you = 0;
		j = 1;
		ge = 0;
		int j = 0;
		int x = 0, x1 = 0;
		for (int i = 0; sen[i] != 0; i++) {
			if (sen[i] == '(') {
				zuow[kl] = i + 1;
				shu[kl] = 0;
				x++;
				kl++;
				zuo++;
			}
			if (sen[i] == ')') {
				for (int o = kl - 1; o >= 0; o--) {
					if (shu[o] == 0) {
						youw[o] = i + 1;
						shu[o] = 1;
						break;
					}
				}
				you++;
			}
			if (zuo == you) {
				zuo = 0;
				you = 0;
				for (j; j < kl; j++) {
					printf("%d %d\n", zuow[j], youw[j]);
				}
			}

		}
	}
	return 0;
}

//			if (sen[i] == ')') {
//				for (j ; j <= i; j++) {
//					printf("%d %d\n", j, 2 * i + 1 - j);
//				}
//				j--;
//				j = j + ge + 1;
//				i = i + ge - 1;
//				ge = 0;
//			} else
//				ge++;
//		}