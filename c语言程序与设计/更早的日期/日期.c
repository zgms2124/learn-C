#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	printf("Enter first date(mm/dd/yy):");
	scanf("%d/%d/%d", &a, &b, &c);
	printf("Enter second date(mm/dd/yy):");
	scanf("%d/%d/%d", &d, &e, &f);
	if (c < f || (c == f && a < d) || (c == f && a == d && b < e)) {
		printf("%d/%d/%02d is earlier than %d/%d/%02d", a, b, c, d, e, f);
	} else {
		printf("%d/%d/%02d is earlier than %d/%d/%02d", d, e, f, a, b, c);
	}
	return 0;
}