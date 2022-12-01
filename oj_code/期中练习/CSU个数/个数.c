#include <stdio.h>

int main() {
	int c, s, u, min;
	char ch;
	char sen[20001];
	while ( scanf("%s", sen) != EOF) {
		c = 0;
		s = 0;
		u = 0;
		for (int i = 0; sen[i] != 0; i++) {
			if (sen[i] == 'C')
				c++;
			if (sen[i] == 'S')
				s++;
			if (sen[i] == 'U')
				u++;

		}
		int min = c;
		if (min > s)
			min = s;
		if (min > u)
			min = u;
		printf("%d\n", min);
	}
	return 0;
}