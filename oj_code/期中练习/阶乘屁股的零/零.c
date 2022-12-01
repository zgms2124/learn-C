#include <stdio.h>

int main() {
	int a;
	int num = 0;
	while (scanf("%d", &a) != EOF) {
		num = 0;
		for (int i = 5; i <= a; i += 5) {
			int j = i;
			while (j % 5 == 0) {
				if (j % 5 == 0)
					num++;
				j /= 5;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}

