#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int n = t;
	int bs, ys, nian;
	int yue, ri, dyue, dri;
	int dys, dbei;
	int i;
	int ansyue, ansri;
	int s;
	while (t--) {
		scanf("%d %d %d", &ys, &bs, &nian);
		s = 0;
		for (yue = 1; yue <= 12 && s < 2; yue++) {
			for (ri = 1; ri <= 31 && s < 2; ri++) {
				dyue = yue;
				dri = ri;
				for (i = 1; i <= ri && i <= yue; i++) {
					if (yue % i == 0 && ri % i == 0) {
						dys = i;
					}
				}
				if (dys == ys) {
					while (dyue > dri || dri > dyue) {
						if (dyue > dri) {
							dri += ri;
						} else {
							dyue += yue;
						}
					}
					if (bs == dyue) {
						if (s == 1)
							s = 2;
						if (s == 0)
							s = 1;
						ansyue = yue;
						ansri = ri;
					}
				}
			}
		}
		printf("Case #%d: ", n - t);
		if (s == 0)
			printf("-1\n");
		else if (s == 1)
			printf("%d/%0.2d/%0.2d\n", nian, ansyue, ansri);
		else
			printf("1\n");
	}
	return 0;
}