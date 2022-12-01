#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char sen[n];
	int num = 0, s = 0;
	scanf("%s", sen);
	for (int i = 0; i < n; i++) {
		if (sen[i] == 'V' && sen[i + 1] == 'K') {
			num++;
		}
		if (sen[i] == 'V' && sen[i + 1] == 'V' && sen[i + 2] == 0 && s == 0) {
			num++;
			s = 1;
		}
		if (sen[i] == 'K' && sen[i - 1] == 'K' && sen[i - 2] == 0 && s == 0) {
			num++;
			s = 1;
		}
		if (sen[i] == 'K' && sen[i - 1] == 'K' && sen[i - 2] == 'K' && s == 0) {
			num++;
			s = 1;
		}
		if (sen[i] == 'V' && sen[i + 1] == 'V' && sen[i + 2] == 'V' && s == 0) {
			num++;
			s = 1;
		}
	}
	printf("%d\n", num);
	return 0;
}