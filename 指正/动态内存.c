#include <stdio.h>
#include <stdlib.h>

int main() {
	void *p = 0;
	int cnt = 0;
	while (p = malloc(1024 * 1024 * 100)) {
		cnt++;
	}
	free(p);
	printf("����%d00MB�Ŀռ�", cnt);
	return 0;
}