#include <stdio.h>

int main() {
	char star[7], zu[7];
	scanf("%s", star);
	scanf("%s", zu)	;
	int S1 = 0, S2 = 0;
	int sum1 = 1,
	    sum2 = 1;
	for (int i = 0; i < 6, star[i] != 0 || zu[i] != 0; i++) {
		if (star [i] != 0 && S1 == 0) {
			sum1 *= (star[i] - 'A' + 1);
		}
		if (star[i] == 0)
			S1 = 1;


		if (zu[i] != 0 && S2 == 0) {
			sum2 *= (zu[i] - 'A' + 1);
		}
		if (zu[i] == 0)
			S2 = 1;
	}
	if (sum1 % 47 == sum2 % 47)
		printf("GO");
	else
		printf("STAY");
	return 0;
}