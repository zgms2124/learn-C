#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int a[N];
	int i, j;
	int x = 1;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

//  法一
//	int x=N;
//	for (i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//		for (j = 0; j < i; j++) {
//			if (a[i] == a[j]) {
//				x--;
//				break;//关键
//			}
//		}
//	}
//	printf("%d\n", x);


//  法二
//	int x=N;
//	for (i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = N - 1; i > -1; i--) {
//		for (j = N; j > i; j--) {
//			if (a[i] == a[j]) {
//				x--;
//				break;//关键
//			}
//		}
//	}
//	printf("%d\n", x);


	for (i = 0; i < N; i++) {
		for (int j = 1 + i; j < N; j++) {
			if (a[i] > a[j]) {
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
//  法三
	for (j = 1; j < N; j++) {
		if (a[j] != a[j - 1])
			x++;
	}
	printf ("%d\n", x);

	printf("%d ", a[0]);
	for (j = 1; j < N; j++) {
		if (a[j] != a[j - 1])
			printf("%d ", a[j]);
		x++;
	}

	return 0;
}