#include <stdio.h>
#include <string.h>

char *mycopy(char *ans, const char *str) {
	char *t = ans;
	while (*str != 0) {
		*ans++ = *str++;
	}
	*ans = 0;
	return t;

}

int main() {
	char str[] = "abc\0";
	char ans[] = "efg\0";
	mycopy(ans, str);
	printf("%s", ans);
	return 0;
}