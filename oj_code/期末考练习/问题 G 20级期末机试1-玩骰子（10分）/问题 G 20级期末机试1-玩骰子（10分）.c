#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);
	{
		while (T--) {
			int num[7] = {0};
			char sen[7];
			int time;
			scanf("%s %d", sen, &time);
			for (int i = 0; i < 6; i++) {
				int t = sen[i] - '0';
				num[t]++;
				if (t == 1) {
					for (int j = 2; j <= 6; j++) {
						num[j]++;
					}
				}
			}
			for (int i = 0; i < time; i++) {
				int a, b;
				scanf("%d %d", &a, &b);
				if (num[b] >= a) {
					printf("%d:true\n", i + 1);
				} else {
					printf("%d:false\n", i + 1);
				}
			}
			printf("\n");
		}
	}
	return 0;
}