#include <stdio.h>

void swap(int ans[], int j, int r ) {
	int t = ans[r];
	ans[r] = ans[j];
	ans[j] = t;
}

int main() {
	char sen[1024];
	int ans[1024] = {0};
	int ge;
	while (scanf("%s", sen) != EOF) {
		ge = 0;
		int i = 0;
		while (sen[i]) {
			if (sen[i] == '5') {
				i++;
				continue;
			} else {
				while (sen[i] == '0')
					i++;
				int temp = 0;
				while (sen[i] != '5' && sen[i] != 0) {
					temp = temp * 10 + (sen[i++] - '0');

				}
				ans[ge++] = temp;
				for (int j = ge - 1; j > 0; j--) {
					if (ans[j] < ans[j - 1])
						swap(ans, j, j - 1);
					else
						break;
				}

			}
		}
		for (int i = 0; i < ge - 1; i++) {
			printf("%d ", ans[i]);
		}
		printf("%d\n", ans[ge - 1]);
	}
	return 0;
}