#include <stdio.h>
#include <string.h>

struct fen {
	char ren[15];
	int yu;
	int shu;
	int ying;
	int zong;
} ;

struct fen1 {
	char ren[15];
	int singal;
} ;

//int cmp(char a[], char b[]) {
//	int i = 0;
//	while (a[i] == b[i]) {
//		i++;
//	}
//	if (a[i] > b[i])
//		return 2;
//	else
//		return 1;
//}

//void fenpai(int b[], struct fen a[], int n) {
//	int f1 = 0, f11, f2 = 0, f22, f3 = 0, f33;
//	for (int i = 0; i < n; i++) {
//		if (b[i] > f1) {
//			f1 = b[i];
//			f11 = i;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (b[i] > f2 ) {
//			if (i != f11) {
//				f2 = b[i];
//				f22 = i;
//			}
//
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (b[i] > f3 ) {
//			if (i != f11 && i != f22) {
//				f3 = b[i];
//				f33 = i;
//			}
//		}
//	}
//	if (f1 == f2 && f2 == f3) {
//		if (cmp(a[f11].ren, a[f22].ren) == 1) {
//			{
//				if (cmp(a[f22].ren, a[f33].ren) == 2) {
//					int t;
//					t = f22;
//					f22 = f33;
//					f33 = t;
//
//				}
//			}
//		} else {
//			int t;
//			t = f11;
//			f11 = f22;
//			f22 = t;
//			if (cmp(a[f22].ren, a[f33].ren) == 2) {
//				int t;
//				t = f22;
//				f22 = f33;
//				f33 = t;
//				if (cmp(a[f11].ren, a[f22].ren) == 2) {
//					int t;
//					t = f11;
//					f11 = f22;
//					f22 = t;
//				}
//			}
//
//
//		}
//	} else if (f1 == f2 && f2 != f3) {
//		if (cmp(a[f11].ren, a[f22].ren) == 2) {
//			int t;
//			t = f11;
//			f11 = f22;
//			f22 = t;
//		}
//	} else if (f2 == f3) {
//		if (cmp(a[f22].ren, a[f33].ren) == 2) {
//			int t;
//			t = f22;
//			f22 = f33;
//			f33 = t;
//		}
//	}
//	printf("%s %d\n", a[f11].ren, f1);
//	printf("%s %d\n", a[f22].ren, f2);
//	printf("%s %d\n\n", a[f33].ren, f3);
//}

void printgrade(struct fen1 b[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (b[j].singal < b[j + 1].singal) {
				struct fen1 t;
				t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%s %d\n", b[i].ren, b[i].singal);
	}
	printf("\n");
}

int main() {
	int n;
	int num = 0;
	while (scanf("%d", &n) != EOF) {
		if (num != 0)
			printf("\n");
		struct fen a[n];
		for (int i = 0; i < n; i++) {
			scanf("%s %d %d %d", &a[i].ren, &a[i].yu, &a[i].shu, &a[i].ying);
			a[i].zong = a[i].yu + a[i].shu + a[i].ying;
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (strcmp(a[j].ren, a[j + 1].ren) > 0) {
					struct fen t;
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		}
		struct fen1 b[n];
		for (int i = 0; i < n; i++) {
			strcpy(b[i].ren, a[i].ren);
			b[i].singal = a[i].zong;
		}
		printgrade(b, n);
		for (int i = 0; i < n; i++) {
			strcpy(b[i].ren, a[i].ren);
			b[i].singal = a[i].yu;
		}
		printgrade(b, n);
		for (int i = 0; i < n; i++) {
			strcpy(b[i].ren, a[i].ren);
			b[i].singal = a[i].shu;
		}
		printgrade(b, n);
		for (int i = 0; i < n; i++) {
			strcpy(b[i].ren, a[i].ren);
			b[i].singal = a[i].ying;
		}
		printgrade(b, n);

//		int tempa[n];
//		for (int i = 0; i < n; i++) {
//			tempa[i] = a[i].zong;
//		}
//		fenpai(tempa, a, n);
//		for (int i = 0; i < n; i++) {
//			tempa[i] = a[i].yu;
//		}
//		fenpai(tempa, a, n);
//		for (int i = 0; i < n; i++) {
//			tempa[i] = a[i].shu;
//		}
//		fenpai(tempa, a, n);
//		for (int i = 0; i < n; i++) {
//			tempa[i] = a[i].ying;
//		}
//		fenpai(tempa, a, n);
	}


	return 0;
}

//void kemu(struct fen a[].ren, struct fen a[], int n) {



//		int zong[n];
//		char ren[n][11];
//		int a[n][3];
//		int b[n];
//		int yw[n];
//		int sx[n];
//		int yy[n];
//		for (int i = 0; i < n; i++) {
//			b[i] = i + 1;
//		}
//		for (int i = 0; i < n; i++) {
//			scanf("%s %d %d %d", &ren[i], &yw[i], &sx[i], &yy[i]);
//			zong[i] = yw[i] + sx[i] + yy[i];
//		}
//		for (int i = 0; i < n - 1; i++) {
//			for (int j = 0; j < n - i - 1; j++) {
//				if (zong[j] > zong[j + 1]) {
//					zong[j] = zong[j] + zong[j + 1];
//					zong[j + 1] = zong[j] - zong[j + 1];
//					zong[j] = zong[j] - zong[j + 1];
//					b[j] = b[j] + b[j + 1];
//					b[j + 1] = b[j] - b[j + 1];
//					b[j] = b[j] - b[j + 1];
////					yw[j] = yw[j] + yw[j + 1];
////					yw[j + 1] = yw[j] - yw[j + 1];
////					yw[j] = yw[j] - yw[j + 1];
////					sx[j] = sx[j] + sx[j + 1];
////					sx[j + 1] = sx[j] - sx[j + 1];
////					sx[j] = sx[j] - sx[j + 1];
////					yy[j] = yy[j] + yy[j + 1];
////					yy[j + 1] = yy[j] - yy[j + 1];
////					yy[j] = yy[j] - yy[j + 1];
//				}
//			}
//		}
//		for (int i = n - 1; i > n - 4; i--) {
//			if (i == n - 3) {
//				printf("%s %d", ren[i], zong[i]);
//				break;
//			} else {
//				if (zong[i] != zong[i - 1]) {
//					printf("%s %d\n", ren[i], zong[i]);
//				} else {
//					for (int j = 0; b[i][j] != 0 || b[i - 1][j] != 0; j++) {
//						if (b[i][j] < b[i - 1][j]) {
//							printf("%s %d\n", ren[i], zong[i]);
//							break;
//						} else if (ren[i][j] > ren[i - 1][j]) {
//							printf("%s %d\n", ren[i - 1], zong[i]);
//							break;
//						} else
//							continue;
//					}
//				}
//			}
//		}
//		printf("\n");
//	}
//
//			int t = b[i];
//			if (i == n - 3) {
//				printf("%s %d\n", ren[t - 1], zong[i]);
//				break;
//			}
//			if (zong[i] != zong[i - 1]) {
//				printf("%s %d\n", ren[t - 1], zong[i]);
//			} else {
//				for (int j = 0; ren[t - 1][j] != 0 || ren[b[i - 1] - 1][j] != 0; j++) {
//					if (ren[t - 1][j] != 0 == ren[b[i - 1] - 1][j])
//						continue;
//					if (ren[t - 1][j]  < ren[b[i - 1] - 1][j]) {
//						printf("%s %d\n", ren[t - 1], zong[i]);
//						break;
//					}
//					if (ren[t - 1][j]  > ren[b[i - 1] - 1][j]) {
//						printf("%s %d\n", ren[b[i - 1] - 1], zong[i]);
//						break;
//					}
//				}
//			}