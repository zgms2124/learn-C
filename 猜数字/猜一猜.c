#include <Stdio.h>

int main() {
	int a = 9;
	while (a != 56) {
		scanf("%d", &a);
		if (a > 56)
			printf("����");
		if (a < 56)
			printf("С��");
	}
	printf("yes,you are right");
	return 0;
}