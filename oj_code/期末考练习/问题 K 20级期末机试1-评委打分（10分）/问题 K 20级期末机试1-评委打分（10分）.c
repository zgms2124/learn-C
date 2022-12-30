#include <stdio.h>

typedef struct {
	int num;/*知道是字符串，但是为了好处理，仍然弄成整形。*/
	float ave;
} grade;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		grade arr[n];
		int all[5];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i].num);
			scanf("%d %d %d %d %d", &all[0], &all[1], &all[2], &all[3], &all[4]);
			int mini = 0, maxi = 0;
			for (int j = 1; j < 5; j++) {
				if (all[j] > all[maxi])
					maxi = j;
				if (all[j] < all[mini])
					mini = j;
			}
			int sum = 0;
			for (int j = 0; j < 5; j++) {
				if (j != maxi && j != mini) {
					sum += all[j];
				}
			}
			arr[i].ave = sum / 3.0;
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j].num > arr[j + 1].num) {
					grade t;
					t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j].ave < arr[j + 1].ave) {
					grade t;
					t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%03d %.2f\n", arr[i].num, arr[i].ave);
		}
	}
	return 0;
}