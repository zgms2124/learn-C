#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num, K;
		scanf("%d %d", &num, &K);
		if (num % K != 0) {
			printf("NO\n");
			continue;
		}
		int ass[num];
		for (int j = 0; j < num; j++) {
			scanf("%d", &ass[j]);
		}
		int *bss = 0;
		bss = (int *)malloc(sizeof(int) * num);
		for (int j = 0; j < num; j++) {
			bss[j] = 0;
		}
		int s = 1;
		for (int j = 0; j < num && s; j++) {
			if (bss[j])
				continue;
			bss[j] = 1;
			int temp = ass[j];
			int tempk = 1;
			for (int p = j + 1; p < num; p++) {
				if (bss[p])
					continue;
				if (ass[p] == temp + 1) {
					bss[p] = 1;
					temp = ass[p];
					tempk++;
				} else if (ass[p] == temp)
					continue;
				else {
					s = 0;
					break;
				}
				if (tempk == K) {
					break;
				}
			}
			if (tempk != K)
				s = 0;
		}
		if (s) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		int num, K;
//		scanf("%d %d", &num, &K);
//		if (num % K != 0) {
//			printf("NO\n");
//			continue;
//		}
//		int ass[num], bss[num], bssr = 0, temp = 0, s = 1;
//		for (int j = 0; j < num; j++) {
//			scanf("%d", &ass[j]);
//		}
//		for (int j = 0; j < num; j++) {
//			bss[j] = 0;
//		}
//		for (int j = 1; j < num; j++) {
//			if (ass[j] == ass[j - 1]) {
//				temp++;
//			} else if (ass[j] == ass[j - 1] + 1) {
//				bss[bssr++] = temp + 1;
//				temp = 0;
//			} else {
//				s = 0;
//				break;
//			}
//		}
//		bss[bssr++] = temp + 1;
//		for (int j = 0; j < bssr && s; j++) {
//			if (bss[j] == 0)
//				continue;
//			if (j == bssr - K + 1 && bss[j] != 0) {
//				s = 0;
//				break;
//			} else if (bss[j] < 0) {
//				s = 0;
//				break;
//			}
//			int tempk = 1;
//			for (int p = j + 1; p < bssr && tempk < K; p++) {
//				tempk++;
//				bss[p] -= bss[j];
//			}
//			bss[j] = 0;
//		}
//		if (s)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

