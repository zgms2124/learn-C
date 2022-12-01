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
////这边也可以改成break
////顺带说一下，continue是跳出这一轮循环进入下一轮
////（剩下的语句不会再做）
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


//这样写更牛逼！

