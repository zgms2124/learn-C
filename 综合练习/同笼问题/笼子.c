#include <stdio.h>


int main() {
	int n, m;
	int s, a, b;
	while (scanf("%d %d", &n, &m) != EOF) {
		if (n != 0 || m != 0) {
			s = 4 * n - m;
			a = s / 2;
			b = n - a;
			if (s % 2 != 0 ) {
				printf("Error\n");
			} else if (a >= 0 && b >= 0) {
				printf("%d %d\n", a, b);
			} else
				printf("Error\n");
		} else
			break;
	}
	/*��Ȼ����Ǹ������Ⱑ��������*/
	/*�����ˣ����ڴ����㣡*/
	return 0;

}

//#include <stdio.h>

//int main() {
//	int m, n, a, b, s;
//	while (scanf("%d%d", &n, &m) != EOF && m && n) {
//		s = 4 * n - m;
//		if (s % 2 != 0)
//			printf("Error\n");
//		else {
//			b = s / 2;
//			a = n - b;
//			if (a >= 0 && b >= 0)
//				printf("%d %d\n", b, a);
//			else
//				printf("Error\n");
//		}
//	}
//	return 0;
//}

