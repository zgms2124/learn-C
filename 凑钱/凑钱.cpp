#include <stdio.h>

int main() {
//	脑瘫才这么写！！！！！！！！
	int a;
//	int m = 0;
//	int i = 0, j = 0, k = 0;
	int x = 1, y = 2, z = 5;
	scanf("%d", &a);
	for (int i = 0; i <= a/*m < a*/; i ++) {
//		j = 0, k = 0;
//		m = i * x;
//		if (m == a)
//			break;
		for (int j = 0; j <= a / 2 /*m < a*/; j ++) {
//			k = 0;
//			m = i * x + j * y;
//			if (m == a) {
//				printf("%d %d %d\n", i, j, k);
//			}
			for (int k = 0; k <= a / 5 /*m < a*/; k++) {
//				m = i * x + j * y + z * k;
				if (i * 1 + j * 2 + k * 5/*m*/ == a) {
					printf("%d %d %d\n", i, j, k);
				}
			}
//			m = i * x + j * y;
		}
//		m = i * x;
	}
//	if (m == a)
//		printf("%d %d %d", i, j, k);
//	else
//		printf("无解");
	return 0;
}


//	int a;
//	int i, j, k;
//	int exit;//接力break
//	scanf("%d", &a);
//
//	for (i = 18; i <= a; i++) {
//		for (j = 0; j < a / 2 ; j++) {
//			for (k = 0; k <  a / 5 ; k++) {
//				if (i * 1 + j * 2 + k * 5 == a) {
//					printf("%d %d %d\n", i, j, k);
////					goto x;
////					exit = 1;
////					break;
//				}
//			}
////			if (exit == 1)
////				break;
//		}
////		if (exit == 1)
////			break;
//	}
////x:
//	//狗兔会破坏源代码的逻辑性，少用为好。
//	return 0;
//}