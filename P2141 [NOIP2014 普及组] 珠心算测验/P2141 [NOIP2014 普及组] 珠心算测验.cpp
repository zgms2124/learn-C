#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int a[N];
	int b[N];//һ�������Ե��ڲ�ͬ������������ֻ�ܼ�Ϊһ��
	int t = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		b[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (a[k] == a[i] + a[j] && b[k] == 0) {
					b[k] = 1;
					t++;
				}

			}
		}
	}
	printf("%d", t);
}