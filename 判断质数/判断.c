#include <stdio.h>

int main() {
	int x;
	int n = 0;
	int i = 2;
	scanf("%d", &x);

//	for (int i = 2; i < x; i++) {
//		if (x % i == 0 ) {
//			n = 1;
//			i = x;
////���Ҳ���Ըĳ�break
////˳��˵һ�£�continue��������һ��ѭ��������һ��
////��ʣ�µ���䲻��������
//		}
//	}
//	if (n == 1)
//		printf("no");
//	else
//		printf("yes");
//    return 0;
//}

	for (i; i < x; i++) {
		if (x % i == 0 )
			break;

	}
	if (i == x)
		printf("yes");
	else
		printf("no");
	return 0;

}


//����д��ţ�ƣ�

