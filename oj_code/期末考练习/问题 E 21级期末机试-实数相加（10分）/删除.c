#include <stdio.h>
#include <string.h>

//垃圾东西！！！！999+1都能算错！！！
int main(void) {
	char x[405] = { 0 }, y[405] = { 0 };
	while (~scanf("%s %s", x, y)) { //用字符串的方式读入两个实数X和Y
		int l1 = strlen(x), l2 = strlen(y);
		char x1[405] = { 0 }, x2[405] = { 0 };//x1是第一个数的整数部分，x2是第一个数的小数部分
		int i = l1, j = l2; //注意i与j的赋值不能为0，若找不到小数点那么整数部分长度就是l1与l2
		for (int k = 0; k < l1; k++) {
			if (x[k] == '.') {
				i = k;//找到小数点，就是整数和小数部分分割的位置
			}
		}
		for (int k = 0; k < i; k++) {
			x1[k] = x[k];
		}
		for (int k = i + 1; k < l1; k++) {
			x2[k - i - 1] = x[k];
		}//分割x

		char y1[405] = { 0 }, y2[405] = { 0 };
		for (int k = 0; k < l2; k++) {
			if (y[k] == '.') {
				j = k;
			}
		}
		for (int k = 0; k < j; k++) {
			y1[k] = y[k];
		}
		for (int k = j + 1; k < l2; k++) {
			y2[k - j - 1] = y[k];
		}//分割y

		int r1[405] = { 0 }, t = 0; //r1为储存整数最终结果的数组
		int p = i - 1, q = j - 1;


		int r2[405] = { 0 }, t2 = 0;//r2为储存小数最终结果的数组
//因为最终小数部分相加后可能会向整数部分进位，所以先计算小数部分
		int len;
		if (l1 - i > l2 - j)//len的长度应为两者中较长者
			len = l1 - 1 - i - 1;
		else
			len = l2 - 1 - j - 1;
		while (len >= 0) {
			int g = x2[len], r = y2[len];

//因为数组中原本储存的是数字0，所以此处应将其转换为字符0才能进行下面的转换
			if (x2[len] == 0)
				g = '0';
			if (y2[len] == 0)
				r = '0';

			r2[t2] = r2[t2] + g - '0' + r - '0';
			if (r2[t2] >= 10) {
				r2[t2] %= 10;
				r2[t2 + 1]++;
			}
			t2++, len--;
		}

		if (r2[t2] != 0) { //向整数部分进位
			r1[0] = r1[0] + 1;
		}

		while (p >= 0 && q >= 0) {
			r1[t] = r1[t] + x1[p] - '0' + y1[q] - '0';
			if (r1[t] >= 10) {
				r1[t] = r1[t] % 10;
				r1[t + 1]++;
			}
			t++, p--, q--;
		}

//计算多出来的部分
		while (p >= 0) {
			r1[t] = r1[t] + x1[p] - '0';
			t++, p--;
		}
		while (q >= 0) {
			r1[t] = r1[t] + y1[q] - '0';
			t++, q--;
		}//至此整数部分加好

		if (r1[t] == 0)//判断整数部分的长度
			t = t - 1;

		for (t; t >= 0; t--)
			printf("%d", r1[t]);//输出整数部分

		int fir = 0;
		while (r2[fir] == 0 && fir < t2) //找到最后一个不为0的小数
			fir++;
		if (fir != t2) {
			printf(".");
			int j = t2 - 1;
			for (j; j >= fir; j--)
				printf("%d", r2[j]);
		}
		printf("\n");
	}
	return 0;
}