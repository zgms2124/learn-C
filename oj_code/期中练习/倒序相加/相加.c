#include <stdio.h>

int main() {
	char a[1000], fan[1000], ans[1000];
	int s, t, p, r;
	while (scanf("%s", a) != EOF) {
		s = 0;
		for (int i = 0; a[i] != 0; i++) {
			if (a[i] == '-')
				s = 1;
			t = i;
		}
//		for (int i=0;i<=t;i++){
//			fan[i]=0;
//		}
		p = 0;
//		if (s == 1)
//			printf("-");
		int j = 0;
		for (int i = t; i >= 0; i--) {
			if (a[i] == '0' && p == 0) {
				continue;
			} else if (a[i] != '-') {
				p = 1;
				fan[j] = a[i];
				j++;
			}
		}
		fan[j] = 0;
		int k = 0;
		int yu = 0;
		j = j - 1;
		for (int i = t; a[i] != '-' && i >= 0; j--, i--) {
			if (j >= 0) {
				ans[k] = ((a[i] - 48 + fan[j] - 48 + yu) % 10) + 48;
				yu = (a[i] - 48 + fan[j] - 48 + yu) / 10;
				k++;
			} else {
				ans[k] = a[i] + yu;
				yu = 0;
				k++;
			}
		}
		if (yu != 0) {
			ans[k] = yu + 48;
			k++;
		}
		if (s == 1)
			printf("-");
		for (int i = k - 1; i >= 0; i--) {
			printf("%c", ans[i]);
		}
		printf("\n");
	}
	return 0;
}