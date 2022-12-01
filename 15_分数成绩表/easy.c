#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a >= 90)
		printf("A");
	else if (a >= 60)
		printf("B");
	else
		printf ("C");
	return 0;
}