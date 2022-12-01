#include <stdio.h>

int main() {
	char ass[26];
	for (int i = 0; i < 26; i++) {
		ass[i] = 'a' + i;
	}
	int css[26];
	for (int i = 0; i < 26; i++) {
		css[i] = 0;
	}
	int N, M, t, j;
	scanf("%d %d", &N, &M);
	char a[N];
	int b[M];
	scanf("%s", a);
	int num[N];
	for (int i = 0; i < M; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < N; i++) {
		for (j = 0; j < 26; j++) {
			if (a[i] == ass[j]) {
				if (css[j] != 0) {
					css[j] ++;
					break;
				} else {
					css[j] = 1;
					break;
				}
			}

		}
		num[i] = css[j];
	}
	for (int i = 0; i < M; i++) {
		t = b[i] - 1;
		printf("%d\n", num[t]);
	}
	return 0;
}