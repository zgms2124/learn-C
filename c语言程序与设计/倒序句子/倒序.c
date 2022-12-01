#include <stdio.h>

int main() {
	char a[201];
	int num = 0;
	char ch;
	printf("Enter a sentence: ");
	while (1) {
		scanf("%c", &ch);
		if (ch != '\n') {
			a[num] = ch;
			num++;
		} else
			break;
	}
	printf("Reversal of sentence: ");
	num--;
	int t = num;
	for (int i = num - 1; i >= 0; i--) {
		if (a[i] == ' ' || i == 0) {
			if (i != 0) {
				for (int j = i + 1; j < t; j++) {
					printf("%c", a[j]);
				}
			} else {
				for (int j = i ; j < t; j++) {
					printf("%c", a[j]);
				}

			}
			t = i;
		}

		else {
			continue;
		}
		if (i != 0)
			printf(" ");
	}
	printf("%c", a[num]);
	return 0;
}