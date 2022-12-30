#include <stdio.h>

void merge(long arr[], int L, int mid, int R) {
	long help[R - L + 1];
	int p1 = L, p2 = mid + 1, r = 0;
	while (p1 <= mid && p2 <= R) {
		help[r++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
	}
	while (p1 <= mid) {
		help[r++] = arr[p1++];
	}
	while (p2 <= R) {
		help[r++] = arr[p2++];
	}
	int len = R - L + 1;
	for (int i = 0; i < len; i++) {
		arr[L++] = help[i];
	}
}

void mergesort(long arr[], int L, int R) {
	if (L == R)
		return ;
	int mid = L + (R - L) / 2;
	mergesort(arr, L, mid);
	mergesort(arr, mid + 1, R);
	merge(arr, L, mid, R);
}



int main() {
	int n;

	scanf("%d", &n);
	long a[n];
//	int num[n][10002];
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
	}
	mergesort(a, 0, n - 1);
	int num = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] != a[i - 1]) {
			printf("%ld %d\n", a[i - 1], num);
			num = 1;
		} else
			num++;

	}
	printf("%ld %d", a[n - 1], num);
	return 0;
}