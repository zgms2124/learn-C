#include <Stdio.h>

int main() {
	int a[3];
	for (int i = 0; i <= 2; i++) {
		scanf("%d", &a[i]);
	}
	int b[3] ;
	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[2];
	for (int j = 0; j <= 2; j++) {
		for (int k = 1; k <= 2; k++) {
			if (a[j] < b[k]) {
				printf("%d", a[j]);
			}
		}
	}
	return 0;
}