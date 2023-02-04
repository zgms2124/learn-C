#include <stdio.h>
#include <string.h>

int main() {
	char sen[35];
	while (scanf("%s", sen) != EOF) {
		int pointnum = 0;
		for (int i = 0; sen[i] != 0; i++) {
			if (sen[i] == '.') {
				pointnum++;
			} else if (!(sen[i] >= '0' && sen[i] <= '9')) {
				pointnum = 0;
				break;
			}
		}
		if (pointnum != 3) {
			printf("N\n");
			continue;
		} else {
			int num = 0;
			for (int i = 0; sen[i] != 0; i++) {
				if (sen[i] != '.') {
					num = num * 10 + sen[i] - '0';
				} else {
					if (num > 255) {
						printf("N\n");
						num = -1;
						break;
					} else {
						num = 0;
					}
				}
			}
			if (num >= 0 && num <= 255) {
				printf("Y\n");
			} else if (num != -1) {
				printf("N\n");
			}
		}
	}
	return 0;
}