#include <stdio.h>

//int cifang(int a, n) {
//	int ans;
//	for (int i = 0; i < n; i++) {
//		a *= a;
//	}
//}

//int zhishu2(int x) {
//	for (int i = 2; i * i <= x; i++) {
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int zhishu(int x, int ass[]) {
//	for (int i = 0; x >= ass[i]; i++) {
//		if (x == ass[i])
//			return 1;
//	}
//	return 0;
//}
//
//int piaoshu(int x, int ass[]) {
//	if (x <= 10)
//		return 1;
//	int s = 0;
//	for (int i = 2; i * i <= x; i++) {
//		if (x % i == 0) {
//			s = 1;
//			if (zhishu(i,  ass) == 1) {
//				if (i != 2 && i != 3 && i != 5 && i != 7)
//					return 0;
//
//			}
//			if (zhishu(x / i,  ass) == 1) {
//				if (x / i != 2 && x / i != 3 && x / i != 5 && x / i != 7)
//					return 0;
//
//			}
//		}
//	}
//	if (s == 1)
//		return 1;
//	else
//		return 0;
//}
int min(int a[]) {
	int m = a[0];
	int i;
	for (i = 0; i < 5844; i++) {
		if (m >= a[i] && a[i] != 0) {
			m = a[i];
		}
	}
	for ( i = 0; i < 5844; i++) {
		if (a[i] == m)
			a[i] = 0;
	}
	return m;
}

int main() {
	int n;
//	int ass[1000];
//	int r = 0;
//	for (int i = 2; r < 1000; i++) {
//		if (zhishu2(i) == 1) {
//			ass[r] = i;
//			r++;
//		}
//	}






	while (	scanf("%d", &n) != EOF) {



		int a[5844] = {0};
		a[0] = 1;
		int t = 1;
		int x = n;
		while (x--) {
			int t1, t2, t3, t4;
			t = min(a);

			t1 = t * 2;
			t2 = t * 3;
			t3 = t * 5;
			t4 = t * 7;
			for (int i = 0; i < 5844; i++) {
				if (a[i] == 0) {
					a[i] = t1;
					break;
				}
			}
			for (int i = 0; i < 5844; i++) {
				if (a[i] == 0) {
					a[i] = t2;
					break;
				}

			}
			for (int i = 0; i < 5844; i++) {
				if (a[i] == 0) {
					a[i] = t3;
					break;
				}

			}
			for (int i = 0; i < 5844; i++) {
				if (a[i] == 0) {
					a[i] = t4;
					break;
				}

			}
		}
		x = n;
		x %= 10;
		if (n == 1)
			printf("The 1st humble number is 1.\n");
		else if (n == 2)
			printf("The 2nd humble number is 2.\n");
		else if (n == 3)
			printf("The 3rd humble number is 3.\n");
		else {
			if (x == 1)
				printf("The %dst humble number is %d.\n", n, t);
			else if (x == 2)
				printf("The %dnd humble number is %d.\n", n, t);
			else if (x == 3)
				printf("The %drd humble number is %d.\n", n, t);
			else {
				printf("The %dth humble number is %d.\n", n, t);

			}
		}
	}
	return 0;
}