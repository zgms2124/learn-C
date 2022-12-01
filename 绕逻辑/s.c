#include <stdio.h>

int a() {
	!b();
	return 1;
}

int b() {
	!c();
}

int c() {
	!a();
}

int main() {
	printf("%d", a());
	return 0;

}