//#include <stdio.h>

//#include <ctype.h>
//
//int main() {
//	char a, t = '0';
//	int n = 0, x = 0, y = 0, s = 0, num = 0, k = 0;
//	int ass[40000];
//	do {
//		scanf("%c", &a);
//		if (a != '\n') {
//			n++;
//			if (a == t) {
//				num++;
//			} else {
//				if (t == '0') {
//					t = '1';
//				}
//
//				else {
//					t = '0';
//				}
//				ass[k] = num;
//				k++;
//				num = 1;
//			}
//		}
//
//
//	} while (isdigit(a));
//	int time = n * n - 1;
//	for (int i = 0; i < time; i++) {
//		scanf("%c", &a);
//		if (isdigit(a)) {
//			if (a == t) {
//				num++;
//			} else {
//				if (t == '0') {
//					t = '1';
//				}
//
//				else {
//					t = '0';
//				}
//
//				ass[k] = num;
//				k++;
//				num = 1;
//			}
//		}
//
//		else {
//			continue;
//		}
//	}
//	ass[k] = num;
//
//
//
//	printf("%d ", n);
//	for (int i = 0; i <= k; i++) {
//		printf("%d ", ass[i]);
//	}
//	return 0;
//
//}



















#include <stdio.h>

int main() {
	int r = 0, num = 0;
	char t = '0';
	char ass[200][201];
	while (scanf("%s", ass[r]) != EOF) {
		r++;
	}
	printf("%d ", r);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			if (ass[i][j] == t) {
				num++;
			} else {
				if (t == '0')
					t = '1';
				else
					t = '0';
				printf("%d ", num);
				num = 1;
			}
		}
	}
	printf("%d", num);
	return 0;
}