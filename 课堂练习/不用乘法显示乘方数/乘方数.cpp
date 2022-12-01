#include <stdio.h>

int main() {
	int a = 1;
	int b = 0;
	for (int i = 1; i < 50; i++)

	{
		b = b + a;
		a += 2;
		printf("%d\n", b);
	}
}