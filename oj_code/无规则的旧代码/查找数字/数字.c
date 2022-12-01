#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int  s = 1, t;
		char a[10 * n];
		getchar();
		scanf("%[^\n]", a);
		char b[1000];
		scanf("%s", b);
		int num = 1;
		int s1 = 0;
		for (int i = 0, j = 0; i < 5 * n; i++, j++) {
			if (a[i] != b[j] && a[i] != ' ') {
				s = 0;
			}
			if (a[i] == ' ' || a[i] == 0) {
				if (s == 1 && b[j] == 0) {
					printf("%d\n", num);
					s1 = 1;
					break;
				}
				if (a[i] == 0)
					break;
				else {
					j = -1;
					num++;
					s = 1;
					continue;
				}


			}

		}
		if (s1 == 0)
			printf("-1\n");
	}
	return 0;
}