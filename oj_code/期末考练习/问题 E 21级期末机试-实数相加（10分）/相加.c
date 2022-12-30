#include <stdio.h>

int main() {
	char num1[404], num2[404], ans[404];
	int point1, point2, wei1, wei2, hou1, hou2, t, s1, s2;
	char num11[404], num21[404];
	int f1, f2, type;
	while (scanf("%s %s", num11, num21) != EOF) {
		if (num11[0] == '-' && num21[0] == '-')
			type = 2;
		else if (num11[0] != '-' && num21[0] != '-')
			type = 1;
		else if (num11[0] == '-' && num21[0] != '-')
			type = 3;
		else if (num11[0] != '-' && num21[0] == '-')
			type = 4;
		if (type == 1) {
			int k;
			for (int i = 0; num11[i] != 0; i++) {
				num1[i] = num11[i];
				k = i;
			}
			num1[k + 1] = '\0';
			for (int i = 0; num21[i] != 0; i++) {
				num2[i] = num21[i];
				k = i;
			}
			num2[k + 1] = '\0';
		}
		if (type == 2) {
			int k;
			for (int i = 1; num11[i] != 0; i++) {
				num1[i - 1] = num11[i];
				k = i;
			}
			num1[k ] = '\0';
			for (int i = 1; num21[i] != 0; i++) {
				num2[i - 1] = num21[i];
				k = i;
			}
			num2[k ] = '\0';
		}
		if (type == 3) {
			int k;
			for (int i = 1; num11[i] != 0; i++) {
				num1[i - 1] = num11[i];
				k = i;
			}
			num1[k + 1] = '\0';
			for (int i = 0; num21[i] != 0; i++) {
				num2[i] = num21[i];
				k = i;
			}
			num2[k + 1] = '\0';
		}
		if (type == 4) {
			int k;
			for (int i = 0; num11[i] != 0; i++) {
				num1[i] = num11[i];
				k = i;
			}
			num1[k + 1] = '\0';
			for (int i = 1; num21[i] != 0; i++) {
				num2[i - 1] = num21[i];
				k = i;
			}
			num2[k + 1] = '\0';

		}
		int r = 0;
		int ansi = 0;
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
		if (type == 1 | type == 2) {

			if (hou1 > hou2) {
				for (int i = 0; i < hou1 - hou2; i++) {
					ans[r] = num1[wei1 - i];
					r++;
				}
				for (int i = 0; i < hou2; i++) {
					ans[r] = '0' + ((temp + num1[wei2 - i] - '0' + num2[wei2 - i] - '0') % 10);
					temp = (temp + num1[wei2 - i] - '0' + num2[wei2 - i] - '0') / 10;
					r++;

				}
			} else {
				for (int i = 0; i < hou2 - hou1; i++) {
					ans[r] = num2[wei2 - i];
					r++;
				}

				for (int i = 0; i < hou1; i++) {
					ans[r] = '0' + ((temp + num2[wei1 - i] - '0' + num1[wei1 - i] - '0') % 10);
					temp = (temp + num2[wei1 - i] - '0' + num1[wei1 - i] - '0') / 10;
					r++;

				}
			}
			ans[r++] = '.';
			if (point1 > point2) {
				for (int i = 0; i < point2; i++) {
					temp;
					ans[r] = '0' + ((temp + num1[point2 - i - 1] - '0' + num2[point2 - i - 1] - '0') % 10);
					temp = (temp + num1[point2 - i - 1] - '0' + num2[point2 - i - 1] - '0') / 10;
					r++;

				}
				for (int i = 0; i < point1 - point2; i++) {
					ans[r] = num1[point1 - point2 - i - 1];
					r++;
				}
			} else {
				for (int i = 0; i < point1; i++) {
					temp;
					ans[r] = '0' + ((temp + num2[point1 - i - 1] - '0' + num1[point1 - i - 1] - '0') % 10);
					temp = (temp + num2[point1 - i - 1] - '0' + num1[point1 - i - 1] - '0') / 10;
					r++;

				}
				for (int i = 0; i < point2 - point1; i++) {
					ans[r] = num2[point2 - point1 - i - 1];
					r++;
				}
			}
			if (temp > 0)
				ans[r++] = temp + '0';
			int j;
			for (j = 0; ans[j] == '0' || ans[j] == '.'; j++) {
			}
			if (type == 2)
				printf("-");
			for (int i = r - 1; i >= j; i--) {
				printf("%c", ans[i]);
			}
			printf("\n");
		} else if (type == 3) {

		} else {

		}

	}
	return 0;
}



//		if (point1 > point2) {
//			t = point1;
//			for (int i = 0; i < point1; i++) {
//				if (i < point1 - point2) {
//					num3[i] = 0;
//				} else
//					num3[i] = num2[i - point1 + point2 ];
//			}
//			num3[t] = '.';
//		} else {
//			t = point2;
//			for (int i = 0; i < point2; i++) {
//				if (i < point2 - point1) {
//					num3[i] = 0;
//				} else
//					num3[i] = num1[i - point2 + point1];
//			}
//			num3[t] = '.';
//		}
//		if (hou1 > hou2) {
//			for (int i = t + 1; i - t <= hou1; i++) {
//				num3[i] = num1[point1 + i];
//			}
//			for (int i = hou2 + 1; i < t + hou1; i++) {
//				num2[i] = 0;
//			}
//		} else {
//			for (int i = t + 1; i - t <= hou2; i++) {
//				num3[i] = num2[point2 + i];
//			}
//			for (int i = hou1 + 1; i < t + hou2; i++) {
//				num1[i] = 0;
//			}
//		}