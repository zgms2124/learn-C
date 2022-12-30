
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void text(int a[]) {
	int t = (double)rand() / RAND_MAX * 401;
}

void way1(char x[], char y[], char ans1[]) {
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
	int rt = 0;
	for (t; t >= 0; t--)
		ans1[rt++] = r1[t] + '0';
//		printf("%d", r1[t]);//输出整数部分

	int fir = 0;
	while (r2[fir] == 0 && fir < t2) //找到最后一个不为0的小数
		fir++;
	if (fir != t2) {
		ans1[rt++] = '.';
//		printf(".");
		int j = t2 - 1;
		for (j; j >= fir; j--)
			ans1[rt++] = r2[j] + '0';
//			printf("%d", r2[j]);
	}
	ans1[rt] = '\0';
//	printf("\n");
}

void way2(char num1[], char num2[], char ans2[]) {
	char ans[404];
	int point1 = 0, point2 = 0, wei1 = 0, wei2 = 0, hou1 = 0, hou2 = 0, t = 0, s1 = 0, s2 = 0;
	int r = 0;
	int temp = 0;
	s1 = 0;
	s2 = 0;
	point1 = -1;
	point2 = -1;
	for (int i = 0; s1 == 0 || s2 == 0; i++) {
		if (s1 != 1) {
			if (num1[i] == '.') {
				point1 = i;
			}
			wei1 = i;
			if (num1[i] == 0)
				s1 = 1;
		}
		if (s2 != 1) {
			if (num2[i] == '.') {
				point2 = i;
			}
			wei2 = i;
			if (num2[i] == 0)
				s2 = 1;
		}
	}
	wei1--;
	wei2--;
	if (point1 == -1) {
		hou1 = 0;
		point1 = wei1 + 1;
	} else
		hou1 = wei1 - point1;
	if (point2 == -1) {
		hou2 = 0;
		point2 = wei2 + 1;
	} else
		hou2 = wei2 - point2;
	if (hou1 > hou2) {
		for (int i = 0; i < hou1 - hou2; i++) {
			ans[r] = num1[wei1 - i];
			r++;
		}
		for (int i = 0; i < hou2; i++) {
			ans[r] = '0' + ((temp + num1[wei1 - (hou1 - hou2) - i] - '0' + num2[wei2 - i] - '0') % 10);
			temp = (temp + num1[wei1 - (hou1 - hou2) - i] - '0' + num2[wei2 - i] - '0') / 10;
			r++;

		}
	} else {
		for (int i = 0; i < hou2 - hou1; i++) {
			ans[r] = num2[wei2 - i];
			r++;
		}

		for (int i = 0; i < hou1; i++) {
			ans[r] = '0' + ((temp + num2[wei2 - (hou2 - hou1) - i] - '0' + num1[wei1 - i] - '0') % 10);
			temp = (temp + num2[wei2 - (hou2 - hou1) - i] - '0' + num1[wei1 - i] - '0') / 10;
			r++;

		}
	}
	ans[r++] = '.';
	if (point1 > point2) {
		for (int i = 0; i < point2; i++) {
			ans[r] = '0' + ((temp + num1[point1 - i - 1] - '0' + num2[point2 - i - 1] - '0') % 10);
			temp = (temp + num1[point1 - i - 1] - '0' + num2[point2 - i - 1] - '0') / 10;
			r++;

		}
		for (int i = 0; i < point1 - point2; i++) {
			ans[r] = '0' + ((temp + num1[point1 - point2 - i - 1] - '0' ) % 10);
			temp = (temp + num1[point1 - i - point2 - 1] - '0' ) / 10;
			r++;
		}
	} else {
		for (int i = 0; i < point1; i++) {
			ans[r] = '0' + ((temp + num2[point2 - i - 1] - '0' + num1[point1 - i - 1] - '0') % 10);
			temp = (temp + num2[point2 - i - 1] - '0' + num1[point1 - i - 1] - '0') / 10;
			r++;

		}
		for (int i = 0; i < point2 - point1; i++) {
			ans[r] = '0' + ((temp + num2[point2 - point1 - i - 1] - '0' ) % 10);
			temp = (temp + num2[point2 - i - point1 - 1] - '0' ) / 10;
			r++;
		}
	}
	if (temp > 0)
		ans[r++] = temp + '0';
	int j;
	for (j = 0; ans[j] == '0' ; j++) {
		if (ans[j] == '.') {
			j++;
			break;
		}
	}
	if (ans[j] == '.') {
		j++;
	}
	int rt = 0;
	for (int i = r - 1; i >= j; i--) {
		ans2[rt++] = ans[i];
//			printf("%c", ans[i]);
	}
	ans2[rt] = '\0';
//		printf("\n");
}

int main() {
	int time = 6666;
	char tsen1[404], tsen2[404];
	char c1tsen1[404], c1tsen2[404];
	char c2tsen1[404], c2tsen2[404];
	char ans1[404], ans2[404];
	for (int ti = 0; ti < time; ti++) {
		int n = (double)rand() / RAND_MAX * 200;
		if (n == 0) {
			tsen1[0] = '0';
			tsen1[1] = '\0';
//			printf("%s+", tsen1);
		} else {
			for (int i = 0; i < n; i++) {
				int t = (double)rand() / RAND_MAX * 9;
				tsen1[i] = '0' + t;
			}
			int t = (double)rand() / RAND_MAX * (n - 1);
			if (t > 0) {
				tsen1[t] = '.';
			}
			tsen1[n] = '\0';
//			printf("%s+", tsen1);
		}
		int n2 = (double)rand() / RAND_MAX * 200;
		if (n2 == 0) {
			tsen2[0] = '0';
			tsen2[1] = '\0';
//			printf("%s\n", tsen2);
		} else {
			for (int i = 0; i < n2; i++) {
				int t = (double)rand() / RAND_MAX * 9;
				tsen2[i] = '0' + t;
			}
			int t = (double)rand() / RAND_MAX * (n2 - 1);
			if (t > 0) {
				tsen2[t] = '.';
			}
			tsen2[n2] = '\0';
//			printf("%s\n", tsen2);
		}
		strcpy(c1tsen1, tsen1);
		strcpy(c1tsen2, tsen2);
		strcpy(c2tsen1, tsen1);
		strcpy(c2tsen2, tsen2);
		way2(c2tsen1, c2tsen2, ans2);
		way1(c1tsen1, c1tsen2, ans1);
		int length1 = strlen(ans1);
		int length2 = strlen(ans2);
		if (length1 != length2) {
			printf("NO!!!!!!!!!!!");
			printf("\n\n\n题目：%s+%s", tsen1, tsen2);
			printf("\n答案：%s+%s\n\n\n", ans1, ans2);
			continue;
		}
		for (int q = 0; q < length1; q++) {
			if (ans1[q] != ans2[q]) {
				printf("NO!!!!!!!!!!!");
				printf("\n\n\n题目：%s+%s", tsen1, tsen2);
				printf("\n答案：%s+%s\n\n\n", ans1, ans2);
				break;
			}
		}
	}
	return 0;

}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{

//    return 0;
//}