#include <stdio.h>
int sum(int n);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", sum(n));
	}
	return 0;
}

int sum(int n) {
	int t;
	if (n > 0) {
		t = n + sum(n - 1);
	} else
		return 0;
}