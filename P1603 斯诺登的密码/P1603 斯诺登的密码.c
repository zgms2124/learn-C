#include <stdio.h>
#include <string.h>

int main() {
	char sen[150];
	char word[25];
	int s = 0, t;
	int num[6];
	int r = 0;
	int shuzi[6];
//	int zhuangtai[6];
	for (int j = 0; j < 25; j++) {
		word[j] = 0;
	}
	char panduan[21][25] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
	                        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
	                        "nineteen", "twenty", "another"
	                       };
	char panduan2[2][5] = {"a", "both"};
	char panduan3[3][8] = {"first", "second", "third"};
	scanf("%[^'\n']", sen);
	for (int i = 0, j = 0; sen[i] != 0; i++) {
		if (sen[i] != ' ') {
			word[j] = sen[i];
			j++;
		} else {
			for (int k = 0; k <= 20; k++) {
				if (strcmp(word, panduan2[k]) == 0) {
					shuzi[r] = (k + 1) * (k + 1);
//					zhuangtai[r] = 0;
					r++;

					s = 1;
					break;
				}
				if (strcmp(word, panduan3[k]) == 0) {
					shuzi[r] = (k + 1) * (k + 1);
//					zhuangtai[r] = 0;
					r++;
					s = 1;
					break;
				}
				if (strcmp(word, panduan[k]) == 0) {
					s = 1;
					if (k == 20)
						t = 1;
					else {
						t = (k + 1) * (k + 1);
					}
					shuzi[r] = t % 100;
//					if (t < 100) {
//						zhuangtai[r] = 0;
//					} else
//						zhuangtai[r] = 1;
					r++;
					break;
				}

			}
			for (int j = 0; j < 10; j++) {
				word[j] = 0;
			}
			j = 0;
		}
	}
	for (int i = 0; i < r - 1; i++) {
		for (int j = 0; j < r - 1; j++) {
			if (shuzi[j] > shuzi[j + 1]) {
//				zhuangtai[j] = zhuangtai[j] + zhuangtai[j + 1];
//				zhuangtai[j + 1] = zhuangtai[j] - zhuangtai[j + 1];
//				zhuangtai[j] = zhuangtai[j] - zhuangtai[j + 1];
				shuzi[j] = shuzi[j] + shuzi[j + 1];
				shuzi[j + 1] = shuzi[j] - shuzi[j + 1];
				shuzi[j] = shuzi[j] - shuzi[j + 1];
			}
		}
	}
	t = 0;
	for (int i = 0; i < r; i++) {
		if (t == 1) {
			printf("%02d", shuzi[i]);
		}
		if (shuzi[i] != 0 && t == 0) {
			printf("%d", shuzi[i]);
			t = 1;
		}


	}
	if (s == 0)
		printf("0");
	return 0;

}