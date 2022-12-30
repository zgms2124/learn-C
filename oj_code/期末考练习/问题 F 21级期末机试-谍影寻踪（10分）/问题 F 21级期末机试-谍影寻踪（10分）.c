#include <stdio.h>
#include <string.h>

struct dymz {
	int num;
	int name1;
	int name2;
	struct dymz *next;
};

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		struct dymz arr[2 * n];
		for (int i = 0; i < 2 * n; i++) {
			arr[i].name2 = 0;
			arr[i].next = NULL;
		}
		int r = 0;
		struct dymz *head = &arr[0];
		for (int i = 0; i < n; i++) {
			int a, b, c, d;
			scanf("%d,%d->%d,%d", &a, &b, &c, &d);
			if (r == 0) {
				arr[0].num = a;
				arr[1].num = c;
				arr[0].name1 = b;
				arr[1].name1 = d;
				r = 2;
				arr[0].next = &arr[1];
				arr[1].next = NULL;
			} else {
				int s1 = 0, s2 = 0;
				int wei1, wei2;
				for (int j = 0; j < r; j++) {
					if (arr[j].num == a) {
						if (arr[j].name1 != b)
							arr[j].name2 = b;
						wei1 = j;
						s1 = 1;
					}
					if (arr[j].num == c) {
						wei2 = j;
						if (arr[j].name1 != d)
							arr[j].name2 = d;
						s2 = 1;
					}
				}
				if (s1 == 0) {
					wei1 = r;
					arr[r].num = a;
					arr[r++].name1 = b;
				}
				if (s2 == 0) {
					wei2 = r;
					arr[r].num = c;
					arr[r++].name1 = d;
				}
				arr[wei1].next = &arr[wei2];
				if (head->num == c) {
					head = &arr[wei1];
				}
			}

		}
		while (head) {
			printf("%d,%d", head->num, head->name1);
			if (head->name2 != 0) {
				printf("#%d", head->name2);
			}
			if (head->next)
				printf("->");
			head = head->next;
		}
		printf("\n");
	}
	return 0;
}