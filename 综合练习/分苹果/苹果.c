#include <stdio.h>

int main() {
	long a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (c  > (a - b)) {
		printf("UnHappy!");
	} else if ((a - b) %   c != 0) {
		printf("UnHappy!");
	} else
		printf("Happy!");
	return 0;

}