#include <stdio.h>

int main() {
	int a = 101;
	int s = 0;
	for (a; a < 201; a++) {
		for (int i = 2; i < a ; i++) {
			if (a % i == 0) {
				s = 1;
				break;
			}
		}
		if (s == 1) {
			printf("%d不是质数\n", a);
			s = 0;
		} else {
			printf("%d是质数\n", a);
		}
	}
	return 0;
}