#include <stdio.h>

int main() {
	char a[80];
	int n, t;
	while (1) {
		printf("Enter message to be encrypted: ");
		scanf("%[^\n]", a);
		getchar();
		printf("Enter shift amount(1-25): ");
		scanf("%d", &n);
		getchar();
		for (int i = 0; a[i] != 0; i++) {
			if ((a[i] <= 122 && a[i] >= 97) || (a[i] <= 90 && a[i] >= 65)) {
				t = a[i] + n;
				if (((t - n <= 122 && t - n >= 97) && t > 122 ) || ((t - n <= 90 && t - n >= 65) && t > 90 )) {
					t -= 26;
				}
				a[i] = t;
			}
		}
		printf("Encrypted message: %s\n", a);
	}
	return 0;
}