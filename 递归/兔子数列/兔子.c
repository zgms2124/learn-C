#include <stdio.h>
int tuzi(int n, int f1, int f2);

int main() {
	int f1 = 1, f2 = 2;
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", tuzi(n, f1, f2));
	}
	return 0;

}

int tuzi(int n, int f1, int f2) {
	int t;
	if (n > 2) {
		t = tuzi(n - 1, f1, f2) + tuzi(n - 2, f1, f2);
	} else {
		if (n == 1)
			t = f1;
		else
			t = f2;
		return t;
	}
}