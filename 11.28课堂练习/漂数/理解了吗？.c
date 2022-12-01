#include <stdio.h>

int main() {
	int a[5845];
	a[0] = 1;
	int i1 = 0, i2 = 0, i3 = 0, i4 = 0;/*理解为代数指针，指向数组a的位置，表示某个位置需要*2/3/4/5*/
	/*当指的位置a【ix】*2/3/4/5后，哪个i所指的值乘完最小，就把结果放到a的下一位，即为所求*/
	/*并且把对应的i++，代表这个位置乘过了ix，继续下一个位置重复循环*/
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int min = a[i1] * 2;
		if (a[i2] * 3 < min) {
			min = a[i2] * 3;
		}
		if (a[i3] * 5 < min) {
			min = a[i3] * 5;
		}
		if (a[i4] * 7 < min) {
			min = a[i4] * 7;
		}
		/*以上代码是求a【ix】的最小值*/
		a[i] = min;/*放置最小值*/

		/*对应ix++*/
		if (min == a[i1] * 2) {
			i1++;
		}
		if (min == a[i2] * 3) {
			i2++;
		}
		if (min == a[i3] * 5) {
			i3++;
		}
		if (min == a[i4] * 7) {
			i4++;
		}

	}
	printf("%d", a[n - 1]);
	return 0;
}