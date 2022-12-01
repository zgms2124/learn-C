#include <stdio.h>
int max(int a[], int len);

int main() {
	char sen[100];
	int zimu[26] = {0};
	for (int i = 0; i < 4; i++) {
		scanf("%[^\n]", sen);
		for (int j = 0; sen[j] != 0; j++) {
			if (sen[j] >= 'A' && sen[j] <= 'Z') {
				int t = sen[j] - 'A';
				zimu[t]++;
			}
		}
		getchar();

	}
	int t = max(zimu, 26);
	char ans[26][t + 1];
	for (int j = 0; j < 26; j++) {
		for (int k = 0; k < t + 1; k++) {
			if (k < t - zimu[j]) {
				ans[j][k] = ' ';
			} else if (k != t) {
				ans[j][k] = '*';
			} else {
				ans[j][k] = 'A' + j;
			}
		}
	}
	for (int i = 0; i < t + 1; i++) {
		for (int j = 0; j < 25; j++) {
			printf("%c ", ans[j][i]);
		}
		printf("%c\n", ans[25][i]);
	}
	return 0;
}

int max(int a[], int len) {
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
//                            *
//                            *
//        *                   *
//        *                   *     *   *
//        *                   *     *   *
//*       *     *             *     *   *
//*       *     * *     * *   *     * * *
//*       *   * * *     * *   * *   * * * *
//*     * * * * * *     * * * * *   * * * *     * *
//* * * * * * * * * * * * * * * * * * * * * * * * * *
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//              *
//              *
//    *         *
//    *         *  * *
//    *         *  * *
//*   *  *      *  * *
//*   *  **  ** *  ***
//*   * ***  ** ** ****
//*  ******  ***** ****  **
//**************************
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
//                            *
//                            *
//        *                   *
//        *                   *     *   *
//        *                   *     *   *
//*       *     *             *     *   *
//*       *     * *     * *   *     * * *
//*       *   * * *     * *   * *   * * * *
//*     * * * * * *     * * * * *   * * * *     * *
//* * * * * * * * * * * * * * * * * * * * * * * * * *
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z