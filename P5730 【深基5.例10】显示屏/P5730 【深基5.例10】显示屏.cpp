#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	char a[N];
	int  i;
	scanf("%s", a);
//	for (int i = 0; i < N; i++) {
//		a[i] = t % 10;
//		t /= 10;
//	}
	for ( i = 0; i < N; i++) {
		if (a[i] == '0')
			printf("XXX");
		else if (a[i] == '1')
			printf("..X");
		else if (a[i] == '2')
			printf("XXX");
		else if (a[i] == '3')
			printf("XXX");
		else if (a[i] == '4')
			printf("X.X");
		else if (a[i] == '5')
			printf("XXX");
		else if (a[i] == '6')
			printf("XXX");
		else if (a[i] == '7')
			printf("XXX");
		else if (a[i] == '8')
			printf("XXX");
		else if (a[i] == '9')
			printf("XXX");
		if (i < N - 1) {
			printf(".");
		}
	}
	printf("\n");

	for ( i = 0; i < N; i++) {
		if (a[i] == '0')
			printf("X.X");
		if (a[i] == '1')
			printf("..X");
		if (a[i] == '2')
			printf("..X");
		if (a[i] == '3')
			printf("..X");
		if (a[i] == '4')
			printf("X.X");
		if (a[i] == '5')
			printf("X..");
		if (a[i] == '6')
			printf("X..");
		if (a[i] == '7')
			printf("..X");
		if (a[i] == '8')
			printf("X.X");
		if (a[i] == '9')
			printf("X.X");
		if (i < N - 1) {
			printf(".");
		}

	}
	printf("\n");

	for ( i = 0; i < N; i++) {
		if (a[i] == '0')
			printf("X.X");
		if (a[i] == '1')
			printf("..X");
		if (a[i] == '2')
			printf("XXX");
		if (a[i] == '3')
			printf("XXX");
		if (a[i] == '4')
			printf("XXX");
		if (a[i] == '5')
			printf("XXX");
		if (a[i] == '6')
			printf("XXX");
		if (a[i] == '7')
			printf("..X");
		if (a[i] == '8')
			printf("XXX");
		if (a[i] == '9')
			printf("XXX");
		if (i < N - 1) {
			printf(".");
		}

	}
	printf("\n");

	for ( i = 0; i < N; i++) {
		if (a[i] == '0')
			printf("X.X");
		if (a[i] == '1')
			printf("..X");
		if (a[i] == '2')
			printf("X..");
		if (a[i] == '3')
			printf("..X");
		if (a[i] == '4')
			printf("..X");
		if (a[i] == '5')
			printf("..X");
		if (a[i] == '6')
			printf("X.X");
		if (a[i] == '7')
			printf("..X");
		if (a[i] == '8')
			printf("X.X");
		if (a[i] == '9')
			printf("..X");
		if (i < N - 1) {
			printf(".");
		}

	}
	printf("\n");

	for ( i = 0; i < N; i++) {
		if (a[i] == '0')
			printf("XXX");
		if (a[i] == '1')
			printf("..X");
		if (a[i] == '2')
			printf("XXX");
		if (a[i] == '3')
			printf("XXX");
		if (a[i] == '4')
			printf("..X");
		if (a[i] == '5')
			printf("XXX");
		if (a[i] == '6')
			printf("XXX");
		if (a[i] == '7')
			printf("..X");
		if (a[i] == '8')
			printf("XXX");
		if (a[i] == '9')
			printf("XXX");
		if (i < N - 1) {
			printf(".");
		}

	}
	printf("\n");
	return 0;
}