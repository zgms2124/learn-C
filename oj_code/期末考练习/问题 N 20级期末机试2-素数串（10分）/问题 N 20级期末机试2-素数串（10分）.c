#include <stdio.h>
#include <string.h>

int zsb[1005] = {0};
char s[1005];
int main() {

	zsb[0] = zsb[1] = 1;
	for (int i = 2; i * i <= 1000; i++)
		if (zsb[i] == 0)
			for (int j = i * 2; j <= 1000; j += i)
				zsb[j] = 1;


	while (scanf("%s", s) != EOF) {
		int ans = 1;
		int len = strlen(s);
		int i = 0;
//		for (int i = 0; s[i] != 0; i += 3) {
		/*
		原来错误在这里！！！！！！！！
		s[i]+3可能是无定义了！！！
		数组越界了！！！！！

		*/
		while (i + 3 < len) {
			int t = 0;
			for (int j = i; j < i + 3; j++)
				t = t * 10 + s[j] - '0';

			if (zsb[t] == 1)
				ans = 0;

			i += 3;
		}

		int t = 0;

		for (int j = i; j < len; j++)
			t = t * 10 + s[j] - '0';
		if (zsb[t] == 1)
			ans = 0;
//		}
		if (ans == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

//#include <stdio.h>
//#include <string.h>
//int b[1005] = {0};
//int len;
//char str[1005];
//
//
//int main() {
//	b[0] = b[1] = 1;
//	for (int i = 2; i * i <= 1000; i++)
//		if (b[i] == 0)
//			for (int j = i * 2; j <= 1000; j += i)
//				b[j] = 1;
//
//	while (scanf("%s", str) != EOF) {
//		int check = 1;
//		len = strlen(str);
//		int i = 0;
//		while (i + 3 < len) {
//			int n = 0;
//			for (int j = i; j < i + 3; j++)
//				n = n * 10 + str[j] - '0';
//
//			if (b[n] == 1)
//				check = 0;
//
//			i += 3;
//		}
//
//		int n = 0;
//
//		for (int j = i; j < len; j++)
//			n = n * 10 + str[j] - '0';
//
//		if (b[n] == 1)
//			check = 0;
//		if (check == 1)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}
