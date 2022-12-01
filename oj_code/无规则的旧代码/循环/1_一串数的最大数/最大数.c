#include <stdio.h>



int main() {
	int a;
	int max = 0;
	while (scanf("%d", &a) != EOF) {
		max = a;
		while (a > 0) {
			scanf("%d", &a);

			if (a >= max) {
				max = a;
			}
		}
		printf("%d\n", max);
	}

	return 0;
}

//#include <stdio.h>
//
//int main() {
//	int number;
//	int largest = 0;
//	while (scanf("%d", &number) != EOF) {
//		if (number > 0) {
//			if (largest < number) {
//				largest = number;
//			}
////else {
////				break;
////			}
//		}
//	}
//	printf("%d\n", largest);
//	return 0;
//}
