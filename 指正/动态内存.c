#include <stdio.h>
#include <stdlib.h>

int main() {
	void *p = 0;
	int cnt = 0;
	while (p = malloc(1024 * 1024 * 100)) {
		cnt++;
	}
	free(p);
	printf("给了%d00MB的空间", cnt);
	return 0;
}