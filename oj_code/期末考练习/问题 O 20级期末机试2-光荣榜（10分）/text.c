#include <stdio.h>
#include <string.h>

struct grb {
	char name[12];
	int chinese;
	int math;
	int english;
	int sumgrade;
};

void printgrade(char name[][12], int grade[], int n) {
	int first, second, third;
	int first1 = 0, second1 = 0, third1 = 0;
	for (int i = 0; i < n; i++) {
		if (grade[i] > first1) {
			first = i;
			first1 = grade[i];
		}

	}
	for (int i = 0, max = 0; i < n ; i++) {
		if (grade[i] > second1 && i != first) {
			second = i;
			second1 = grade[i];
		}

	}
	for (int i = 0, max = 0; i < n ; i++) {
		if (grade[i] > third1 && i != first && i != second) {
			third = i;
			third1 = grade[i];
		}
	}
	char tempname[3][12];
	strcpy(tempname[0], name[first]);
	strcpy(tempname[1], name[second]);
	strcpy(tempname[2], name[third]);
	int tempgrade[3];
	tempgrade[0] = first1;
	tempgrade[1] = second1;
	tempgrade[2] = third1;
	for (int i = 1; i < 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			if (strcmp(tempname[j], tempname[j + 1]) > 0) {
				char str[12];
				strcpy(str, tempname[j]);
				strcpy(tempname[j], tempname[j + 1]);
				strcpy(tempname[j + 1], str);
				int t;
				t = tempgrade[j];
				tempgrade[j] = tempgrade[j + 1];
				tempgrade[j + 1] = t;
			}
		}
	}
	int s1, s2;
	for (int i = 0; i < 3; i++) {
		if (tempgrade[i] == first1) {
			printf("%s %d\n", tempname[i], tempgrade[i]);
			s1 = i;
			break;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (tempgrade[i] == second1 && i != s1) {
			printf("%s %d\n", tempname[i], tempgrade[i]);
			s2 = i;
			break;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (tempgrade[i] == third1 && i != s1 && i != s2) {
			printf("%s %d\n\n", tempname[i], tempgrade[i]);
			break;
		}
	}

}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		struct grb a[n];
		for (int i = 0; i < n; i++) {
			scanf("%s %d %d %d", &a[i].name, &a[i].chinese, &a[i].math, &a[i].english);
			a[i].sumgrade = a[i].chinese + a[i].math + a[i].english;
		}
		char tempname[n][12];
		int temp2[n];
		for (int i = 0; i < n; i++) {
			strcpy(tempname[i], a[i].name);
		}

		for (int i = 0; i < n; i++) {
			temp2[i] = a[i].sumgrade;
		}
		printgrade(tempname, temp2, n);
		for (int i = 0; i < n; i++) {
			temp2[i] = a[i].chinese;
		}
		printgrade(tempname, temp2, n);
		for (int i = 0; i < n; i++) {
			temp2[i] = a[i].math;
		}
		printgrade(tempname, temp2, n);
		for (int i = 0; i < n; i++) {
			temp2[i] = a[i].english;
		}
		printgrade(tempname, temp2, n);
	}
	return 0;
}