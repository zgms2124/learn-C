#include <stdio.h>
void br();
void ic();

int main(void) {
	br();
	printf(",");
	ic("\n");
	printf("\n");
	ic("\n");
	printf("\n");
	br("\n");
	printf("\n");
	return 0;

}

void br() {
	printf("Brazil, Russia");
}

void ic() {
	printf("India, China");
}