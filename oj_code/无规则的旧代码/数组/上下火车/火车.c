//#include <stdio.h>

//
//int main() {
//	int t, w, n, m, x, p1, p2, q, ren, a1, a2;
//	p1 = 0, p2 = 1;
//	while (scanf("%d %d %d %d", &w, &n, &x, &m) != EOF) {
////		int a[n], b[n];
////		a[0] = p1;
////		a[1] = p2;
////		a[0]=w;
////		a[1] = ;
////		b[0] = a[1];
////		for (int i = 2; i < n; i++) {
////			a[i] = a[i - 1] + a[i - 2];
////			if (i > 0) {
////				b[i - 1] = a[i - 2];
////			}
//		for (int i = 2; i < n - 1; i++) {
//			p1 = p1 + p2;
//			p1 = p1 + p2;
//			p2 = p1 - p2;
//			p1 = p1 - p2;
//			if (i + 1 == m) {
//				a1 = p2;
//				a2 = p1;
//			}
//		}
//
////			if (i + 1 == x) {
////				for (int k = 0; k < x; k++) {
////					ren += a[k] - b[k];
////				}
////			}
////		}
//		t = (x - p1 * w) / p2;
//		ren = a1 * t + a2 * w;
//		printf("%d", ren);
//
//	}
//	return 0;
//}
#include <stdio.h>

int main() {

	int n, w, x, m, t;

	int ren1;
	while (scanf("%d %d %d %d", &w, &n, &x, &m) != EOF) {
		int f11 = 0, f12 = 1, f21 = 1, f22 = 0;
		int f1 = 0, f2 = 0;
		int a = 0, b = 0;
		for (int i = 0; i < n - 2; i++) {
			f11 = f11 + f12;
			f11 = f11 + f12;
			f12 = f11 - f12;
			f11 = f11 - f12;

			f21 = f21 + f22;
			f21 = f21 + f22;
			f22 = f21 - f22;
			f21 = f21 - f22;
			if (i == n - 4) {
				f1 = f12 - 1;
				f2 = f22 + 1;
			}
			if (i + 3 == m) {
				a = f12 - 1;
				b = f22 + 1;
//				int f31 = 2, f32 = 2;
//				for (int j = 0; j < m - 4; j++) {
//					f31 = f31 + f32 - 1;
//					f31 = f31 + f32;
//					f32 = f31 - f32;
//					f31 = f31 - f32;
//					b = f32;
//				}
			}
		}

		t = (x - f2 * w) /  f1;
		ren1 = a * t + b * w ;
		switch (m) {
			case 1 :
				printf("%d\n", w);
				break;
			case 2 :
				printf("%d\n", w);
				break;
			case 3 :
				printf("%d\n", w * 2);
				break;
				printf ("0\n");
				break;
			default :
				if (m != n) {
					printf("%d\n", ren1);
				} else
					printf("0\n");
				break;
		}
	}
	return 0;
}



















