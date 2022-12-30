#include <stdio.h>

struct haofen {
	int hao;
	int shu;
	int ying;
	int C;
	int zong;
};

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		struct haofen a[n];
		int best[n] ;
		int worst[n];
		for (int i = 0; i < n; i++) {
			best[i] = 0;
			worst[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d %d", &a[i].hao, &a[i].shu, &a[i].ying, &a[i].C);
			a[i].zong = +a[i].shu + a[i].ying + a[i].C;
		}
		int max = a[0].zong;
		int min = a[0].zong;
		for (int i = 1; i < n; i++) {
			if (a[i].zong > max) {
				max = a[i].zong;
			}
			if (a[i].zong < min) {
				min = a[i].zong;
			}
		}
		for (int i = 1; i < n; i++) {
			for (int j = i - 1; j >= 0; j--) {
				if (a[j].hao > a[j + 1].hao) {
					struct haofen t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				} else
					break;
			}
		}
		printf("BEST\n");
		for (int i = 0; i < n; i++) {
			if (a[i].zong == max) {
				printf("%d %d %d %d %d\n", a[i].hao, a[i].zong, a[i].shu, a[i].ying, a[i].C);
			}
		}
		printf("WORST\n");
		for (int i = 0; i < n; i++) {
			if (a[i].zong == min) {
				printf("%d %d %d %d %d\n", a[i].hao, a[i].zong, a[i].shu, a[i].ying, a[i].C);
			}
		}
		printf("\n");

	}
	return 0;
}