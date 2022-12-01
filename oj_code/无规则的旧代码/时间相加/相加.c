#include <stdio.h>

int main() {
	int h, m, s, H, M, S, t, T, x;
	while (scanf("%d %d %d %d %d %d", &h, &m, &s, &H, &M, &S) != EOF) {
		t = h * 3600 + m * 60 + s;
		T = H * 3600 + M * 60 + S;
		x = t + T;
		h = x / 3600;
		m = (x - h * 3600) / 60;
		s = (x - h * 3600 - m * 60);
		printf("%d %d %d\n", h, m, s);
	}
	return 0;
}