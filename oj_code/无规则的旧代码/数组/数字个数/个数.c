#include <stdio.h>
void quicksort(int x[], int left, int right);

int main() {
	long N;
	int x = 1;
	scanf("%d", &N);
	int a[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, N - 1);
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			if (a[i] > a[j]) {
//				a[i] = a[i] + a[j];
//				a[j] = a[i] - a[j];
//				a[i] = a[i] - a[j];
//			}
//		}
//	}
	printf("%d ", a[0]);
	int t = 1;
	for (int i = 1; i < N; i++) {
		if (a[i] != a[i - 1]) {
			printf("%d\n", t);
			t = 1;
			printf("%d ", a[i]);
		} else
			t++;
	}
	printf("%d\n", t);
	return 0;
}

void quicksort(int x[], int left, int right) {
	if (left < right) {
		int i = left, j = right, key = x[left];
		while (i < j) {
			while (  i < j && x[j] > key)
				j--;
			if (i < j)
				x[i++] = x[j];
			while ( i < j && x[i] < key)
				i++;
			if (i < j)
				x[j--] = x[i];
		}
		x[i] = key;
		quicksort(x, left, i - 1);
		quicksort(x, i + 1, right);
		//上面两个是递归
	}
}