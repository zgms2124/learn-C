#include <stdio.h>

int main() {
	int x, y, z, t;
	while (scanf("%d %d %d", &x, &y, &z)) {

		if (x > y) {
			t = x;
			x = y;
			y = t;
			//����д���Բ��ö����
			//x=x+y;
			//y=x-y;
			//x=x-y;

//			 ����������
//			 y=x+y;
//			 x=y-x;
//			 y=y-x;
		}
		if (x > z) {
			t = x;
			x = z;
			z = t;
		}
		if (y > z) {
			t = y;
			y = z;
			z = t;
		}
		printf("%d %d %d\n", x, y, z);
	}
	return 0;
}