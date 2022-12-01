#include <stdio.h>

int main() {
	long n;
//	long s;
	while (scanf("%ld", &n) != EOF) {
//		long max = 3;
//		for (long i = 1; i < n; i++) {
//			for (long j = i + 1; j <= n; j++) {
//				s = 0;
//				for (long k = 2; k < j; k++) {
//					if (i % k == 0 && j % k == 0) {
//						s = 1;
//						break;
//					}
//					if (s == 0 && i + j > max) {
//						max = i + j;
//					}
//				}
//			}
//	}
		printf("%ld\n", n + n - 1);
	}
	return 0;
}