#include <stdio.h>

int main() {

	enum {
		q = -2, w = -1, e = 0, r = 1
	} x;
	for (x = q; x <= r; x ++) {
		printf("%d\n", x);
	}
	return 0;
}