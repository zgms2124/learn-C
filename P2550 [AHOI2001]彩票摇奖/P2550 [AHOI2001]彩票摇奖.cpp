#include <stdio.h>

int main() {
	int N, t;
	scanf("%d", &N);
	int award[7];
	int a[7];
	for (int i = 0; i < 7; i++) {
		scanf("%d", &award[i]);
	}
	int tim[7];
	for (int i = 0; i < 7; i++) {
		tim[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		t = 0;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &a[j]);
			for (int k = 0; k < 7; k++) {
				if (a[j] == award[k]) {
					t++;
					break;
				}
			}
		}
		t--;
		tim[t]++;
	}
	for (int i = 6; i >= 0; i--)
		printf("%d ", tim [i]);
	return 0;
}