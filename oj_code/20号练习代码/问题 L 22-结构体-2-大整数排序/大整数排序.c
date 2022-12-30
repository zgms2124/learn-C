#include <stdio.h>
#include <string.h>

struct number {
	char shu[1024];
};

int cmp(char num1[], char num2[]) {
	int digit1 = strlen(num1), digit2 = strlen(num2);
	if (digit1 > digit2)
		return 1;
	else if (digit2 > digit1)
		return 0;
	else {
		for (int i = 0; i < digit1; i++) {
			if (num1[i] > num2[i])
				return 1;
			else if (num2[i] > num1[i])
				return 0;
		}
	}
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		struct number sen[n];
		for (int i = 0; i < n; i++) {
			scanf("%s", sen[i].shu);
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (cmp(sen[j].shu, sen[j + 1].shu) == 1) {
					struct number t;
					t = sen[j];
					sen[j] = sen[j + 1];
					sen[j + 1] = t;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%s\n", sen[i].shu);
		}
	}
	return 0;
}