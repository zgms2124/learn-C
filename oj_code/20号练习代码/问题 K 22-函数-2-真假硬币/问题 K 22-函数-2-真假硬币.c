#include <stdio.h>

int main() {
	int x;
	while (scanf("%d", &x) != EOF) {
		int n = 0;
		if (x == 0)
			break;
		long long index = 1;
		while (index < x) {
			index *= 3;
			n++;
		}
		printf("%d\n", n);
	}
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>//����pow������Ҫ��ͷ�ļ�
//
//int main() {
//	int n = 0;
//
//	while (scanf("%d", &n) != EOF) {
//		int flag = 0;
//		if (n == 0)
//			break;
//		else {
//			while (pow(3, flag) < n) {
//				flag++;
//
//
//			}
//			printf("%d\n", flag);
//		}
//	}
//	return 0;
//}