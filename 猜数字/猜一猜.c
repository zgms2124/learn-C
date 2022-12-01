#include <Stdio.h>

int main() {
	int a = 9;
	while (a != 56) {
		scanf("%d", &a);
		if (a > 56)
			printf("大了");
		if (a < 56)
			printf("小了");
	}
	printf("yes,you are right");
	return 0;
}