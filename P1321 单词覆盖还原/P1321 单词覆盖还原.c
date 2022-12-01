#include <stdio.h>

int main() {
	char sen[255];
	int a[255];
	int i;
	for (i = 0; i < 255; i++) {
		a[i] = 0;
	}
	int boy = 0, girl = 0;
	scanf("%s", sen);
//	for (i = 0; sen[i] != 0; i++) {
//		if (sen[i] == '.')
//			a[i] = 1;
//		if (sen[i] == 'b' && sen[i + 1] == 'o' && sen[i + 2] == 'y' && a[i] == 0) {
//			a[i] = 1;
//			a[i + 1] = 1;
//			a[i + 2] = 1;
//			boy++;
//		}
//		if (sen[i] == 'g' && sen[i + 1] == 'i' && sen[i + 2] == 'r' && sen[i + 3] == 'l' && a[i] == 0) {
//			girl++;
//			a[i] = 1;
//			a[i + 1] = 1;
//			a[i + 2] = 1;
//			a[i + 3] = 1;
//		}
//	}
	for (i = 0; sen[i] != 0; i++) {
		if (a[i] == 0) {
			if (sen[i] == 'b') {
//				a[i] = 1;
				if (sen[i + 1] == 'o')
					a[i + 1] = 1;
				if (sen[i + 2] == 'y')
					a[i + 2] = 1;
				boy++;
			}
			if (sen[i] == 'o') {
//				a[i] = 1;
				if (sen[i + 1] == 'y')
					a[i + 1] = 1;
				boy++;
			}
			if (sen[i] == 'y') {
//				a[i] = 1;
				boy++;
			}
			if (sen[i] == 'g') {
//				a[i] = 1;
				if (sen[i + 1] == 'i')
					a[i + 1] = 1;
				if (sen[i + 2] == 'r')
					a[i + 2] = 1;
				if (sen[i + 3] == 'l')
					a[i + 3] = 1;
				girl++;
			}
			if (sen[i] == 'i') {
//				a[i] = 1;
				if (sen[i + 1] == 'r')
					a[i + 1] = 1;
				if (sen[i + 2] == 'l')
					a[i + 2] = 1;
				girl++;
			}
			if (sen[i] == 'r') {
//				a[i] = 1;
				if (sen[i + 1] == 'l')
					a[i + 1] = 1;
				girl++;
			}
			if (sen[i] == 'l') {
//				a[i] = 1;
				girl++;
			}
		}
	}
//下面这种方法的本质是查找有几个b或者是g
//	for (int i = 0; sen[i + 2] != 0; i++) {
//		if (sen[i] == 'b' || sen[i + 1] == 'o' || sen[i + 2] == 'y')
//			boy++;
//	}
//	for (int i = 0; sen[i + 3] != 0; i++) {
//		if (sen[i] == 'g' || sen[i + 1] == 'i' || sen[i + 2] == 'r' || sen[i + 3] == 'l')
//			girl++;
//	}
	printf("%d\n%d", boy, girl);
	return 0;
}