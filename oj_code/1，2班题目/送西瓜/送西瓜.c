#include <stdio.h>

int main() {
	int wmnum, maxt, singalnum;
	while (scanf("%d %d %d", &wmnum, &maxt, &singalnum) != EOF) {
		int ass[wmnum];
		int ans = 0;
		int assr = 0, tempall = 0, tempr = 0, t = 0, s = 1;
		for (int i = 0; i < wmnum; i++) {
			scanf("%d", &ass[assr++]);
			tempall += ass[assr - 1];
			if (tempr < singalnum - 1 && s) {
				tempr++;
			} else {
				s = 0;
				if (tempall <= maxt)
					ans++;
				tempall -= ass[t++];
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}