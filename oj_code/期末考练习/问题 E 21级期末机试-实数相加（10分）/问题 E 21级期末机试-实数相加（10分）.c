#include <stdio.h>

int zhishup(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int ci(int weii) {
	int t = 1;
	for (int i = 0; i < weii; i++) {
		t = t * 10;
	}
	return t;
}

int sizhong(int wei, int zhishu[], int ans[], int a[], int weians[], int weii[], int ai[], int zhishui[], int ansi[],

            int n) {
	while (ai[0] != 4 && ansi[0] != n - 1) {
		int p = weii[0];
		weians[p] = a[ai[0]];
		if (weii[0] == wei - 1) {
			int anst = 0;
			for (p; p >= 0; p--) {
				anst = anst + weians[p] * ci(weii[0]);
			}
			while (anst > zhishu[zhishui[0]]) {
				ans[ansi[0]] = zhishu[zhishui[0]];
				ansi[0]++;
				zhishui++;
			}
			ans[ansi[0]] = anst;
		}
		if (weii[0] < wei - 1) {
			weii[0]++;
			sizhong(wei, zhishu, ans, a, weians, weii, ai, zhishui, ansi, n);
		}

		ai[0]++;
	}
	return 0;

}

int main() {
	int n;
	int zhishu[3000];
	for (int i = 2, l = 0; i < 3000; i++) {
		if (zhishup(i) == 1) {
			zhishu[l] = i;
			l++;
		}
	}
	while (scanf("%d", &n) != EOF) {
		int ans[5000];
		int ansi[1], zhishui[1] ;
		ansi[0] = 0;
		zhishui[0] = 0;
		int a[4] = {2, 3, 5, 7};
		for (int i = 1;; i++) {
			int wei = i;
			int weians[wei], weii[1], ai[1];
			weians[wei];
			weii[0] = 0 ;
			ai[0] = 0;
			sizhong(wei, zhishu, ans, a, weians, weii, ai, zhishui, ansi, n);
			if (ansi[0] == n - 1) {
				printf("%d\n", ans[n - 1]);
				break;
			}
		}
	}
	return 0;
}