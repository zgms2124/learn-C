//#include <stdio.h>


//
//int runnian(int nian) {
//	if ((nian % 4 == 0 && nian % 100 != 0) || nian % 400 == 0)
//		return 366;
//	return 365;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		int nian, yue, ri;
//		int ans = 0;
//		scanf("%d-%d-%d", &nian, &yue, &ri);
//		for (int i = nian; i < 2021; i++) {
//			ans += runnian(i);
//		}
//		for (int i = 1; i < yue; i++) {
//			switch (i) {
//				case 1:
//					ans -= 31;
//					break;
//				case 2:
//					ans -= runnian(nian) == 366 ? 29 : 28;
//					break;
//				case 3:
//					ans -= 31;
//					break;
//				case 4:
//					ans -= 30;
//					break;
//				case 5:
//					ans -= 31;
//					break;
//				case 6:
//					ans -= 30;
//					break;
//				case 7:
//					ans -= 31;
//					break;
//				case 8:
//					ans -= 31;
//					break;
//				case 9:
//					ans -= 30;
//					break;
//				case 10:
//					ans -= 31;
//					break;
//				case 11:
//					ans -= 30;
//					break;
//				case 12:
//					ans -= 31;
//					break;
//			}
//		}
//		ans = ans - ri + 1;
//		printf("%d\n", ans + 1);
//	}
//	return 0;
//}
#include <stdio.h>

int main() {
	int  T;
	while (scanf("%d", &T) != EOF) {
		int i, yy, mm, dd;

		for (i = 1; i <= T; i++) {
			int sum = 0;
			int days = 0;
			int day[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
			scanf("%d-%d-%d", &yy, &mm, &dd);
			for (int i = 2020; i >= yy + 1; i--) {
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
					sum += 366;
				} else
					sum += 365;
			}
			if (!(yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0)) {
				day[2] -= 1;
			}
			if (yy == 2021)
				printf("1\n");
			else {
				for (int i = 12; i > mm; i--) {
					sum += day[i];
				}
				printf("%d\n", sum + day[mm] - dd + 2);
			}
			sum = 0;
		}
	}
	return 0;
}
