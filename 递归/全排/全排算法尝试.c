#include <stdio.h>
void quanpai(int a, int ass[]);

void swap(int *a, int *b);

int main() {
	int a;
	scanf("%d", &a);
	int ass[a];
	for (int i = 1; i <= a; i++) {
		ass[i - 1] = i;
	}
	quanpai(a, ass);
	return 0;
}

void swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void quanpai(int a, int ass[]) {
	for (int s = a; s > 0; s--) {
		if (a > 2) {
			quanpai(a - 1, ass);
		} else {
			swap(&ass[0], &ass[1]);
		}
	}
	for (int i = 0; i < a; i++) {
		printf("%d ", ass[i]);
	}
	printf("\n");

}