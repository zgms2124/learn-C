#include <stdio.h>

double jc(unsigned int i) {
	if (i <= 1) {
		return 1;
	}
	return i * jc(i - 1);
}

int main() {
	int i = 6;
	printf("%f", jc(i));
	return 0;
}


//#include <stdio.h>
//
//double factorial(unsigned int i) {
//	if (i <= 1) {
//		return 1;
//	}
//	return i * factorial(i - 1);
//}
//
//int  main() {
//	int i = 15;
//	printf("%d �Ľ׳�Ϊ %f\n", i, factorial(i));
//	return 0;
//}
