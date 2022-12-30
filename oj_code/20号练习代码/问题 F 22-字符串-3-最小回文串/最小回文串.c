#include <stdio.h>
#include <string.h>

int main() {
	char sen[100086];
	while (scanf("%s", sen) != EOF) {
		int length = strlen(sen);
		int mid = length / 2 - 1;
		int cases = 0;
		for (int i = mid; i >= 0; i--) {
			if (sen[i] == sen[length - i - 1]) {
				continue;
			} else if (sen[i] > sen[length - i - 1]) {
				cases = 2;
				for (int j = i; j >= 0; j--) {
					sen[length - j - 1] = sen[j];
				}
				break;
			} else {
				cases = 2;
				int t;
				if (length % 2 == 0) {
					t = mid;
				} else
					t = mid + 1;
				sen[t]++;
				while (sen[t] > '9') {
					sen[t] = '0';
					if (t == 0) {
						cases = 1;
						break;
					} else
						sen[--t]++;
				}
			}
			for (int j = mid ; j >= 0; j--) {
				sen[length - j - 1] = sen[j];
			}
			break;
		}
		if (cases == 0) {
			int t;
			if (length % 2 == 0) {
				t = mid;
			} else
				t = mid + 1;
			sen[t]++;
			while (sen[t] > '9') {
				sen[t] = '0';
				if (t == 0) {
					cases = 1;
					break;
				} else
					sen[--t]++;
			}
			for (int j = mid ; j >= 0; j--) {
				sen[length - j - 1] = sen[j];
			}
		}
		if (cases == 1) {
			printf("1");
			for (int i = 0; i < length - 1; i++) {
				printf("0");
			}
			printf("1\n");
		} else
			printf("%s\n", sen);
	}
	return 0;
}