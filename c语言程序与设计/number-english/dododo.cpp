#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter a two-digit number:");
	while (scanf("%d", &a) != EOF) {
		b = a / 10;
		c = a % 10;
		if (a == 10) {
			printf("You entered the number ten.\n");
		} else if (a == 11) {
			printf("You entered the number eleven.\n");
		} else if (a == 12) {
			printf("You entered the number twelve.\n");
		} else if (a == 13) {
			printf("You entered the number thirteen.\n");
		} else if (a == 14) {
			printf("You entered the number fourteen.\n");
		} else if (a == 15) {
			printf("You entered the number fifteen.\n");
		} else if (a == 16) {
			printf("You entered the number sixteen.\n");
		} else if (a == 17) {
			printf("You entered the number seventeen.\n");
		} else if (a == 18) {
			printf("You entered the number eighteen.\n");
		}		else if (a == 19) {
			printf("You entered the number nineteen.\n");
		}

		else {
			switch (b) {
				case 2:
					printf("You entered the number twenty");
					break;
				case 3:
					printf("You entered the number thirty");
					break;
				case 4:
					printf("You entered the number forty");
					break;
				case 5:
					printf("You entered the number fifty");
					break;
				case 6:
					printf("You entered the number sixty");
					break;
				case 7:
					printf("You entered the number seventy");
					break;
				case 8:
					printf("You entered the number eighty");
					break;
				case 9:
					printf("You entered the number ninety");
					break;

			}
			switch (c) {
				case 1:
					printf("-one.\n");
					break;
				case 2:
					printf("-two.\n");
					break;
				case 3:
					printf("-three.\n");
					break;
				case 4:
					printf("-four.\n");
					break;
				case 5:
					printf("-five.\n");
					break;
				case 6:
					printf("-six.\n");
					break;
				case 7:
					printf("-seven.\n");
					break;
				case 8:
					printf("-eight.\n");
					break;
				case 9:
					printf("-nine.\n");

					break;
			}
		}
	}
	return 0;
}