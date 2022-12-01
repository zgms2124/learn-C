#include <stdio.h>

int main() {
	for (char i = 'x'; i <= 'z'; i++) {
		for (char j = 'x'; j <= 'z'; j++) {
			if (i != j) {
				for (char k = 'x'; k <= 'z'; k++) {
					if (k != i && k != j) {
						if (i != 'x' && k != 'x' && k != 'z') {
							printf("a--%c,b--%c,c--%c", i, j, k);
						}
					}
				}
			}
		}
	}
	return 0;

}