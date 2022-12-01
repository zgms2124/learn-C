#include <stdio.h>

int main() {
	int shu1, shu2, shu3, shu4;
	char fuhao;
	int mu, zi;
	while (scanf("%d/%d%c%d/%d", &shu1, &shu2, &fuhao, &shu3, &shu4) != EOF) {
//		char shu1[5],shu2[5],shu3[5],shu4[5]
//	    int i,j,k,l;
//		int m1=1,m2=1,m3=1,m4=1;
//		int p=1;
//		int yunsuan;
//		for (i=0;sen[i]!=0;i++){
//			if(sen[i]>='0'&&sen[i]<='9'){
//				switch(p){
//					case 1:
//						shu1[m1++]=sen[i];
//						break;
//					case 2:
//						shu2[m2++]=sen[i];
//						break;
//					case 3:
//						shu3[m3++]=sen[i];
//						break;
//					case 4:
//						shu4[m4++]=sen[i];
//						break;
//				}
//			}
//			else if(sen[i]=='+'){
//				yunsuan=1;
//			}
//			else if(sen[i]=='-'){
//				yunsuan=0;
//			}
//			else {
//				p++;
//			}
//		}
//
		mu = shu2 * shu4;
		if (fuhao == '+') {
			zi = shu1 * shu4 + shu2 * shu3;
		} else {
			zi = shu1 * shu4 - shu2 * shu3;
		}
		if (zi > 0) {
			fuhao = '+';
		} else if (zi < 0) {
			fuhao = '-';
			zi = -zi;
		} else {
			fuhao = '6';
		}
		if (fuhao == '6')
			printf("0\n");
		else {
			for (int i = 2; i <= zi && i <= mu; i++) {
				if (zi % i == 0 && mu % i == 0) {
					zi /= i;
					mu /= i;
					i = 1;
				}
			}
			if (fuhao == '+') {
				if (mu == 1) {
					printf("%d\n", zi);
				} else {
					if (zi > mu) {
						printf("%d+%d/%d\n", zi / mu, zi - zi / mu * mu, mu);
					} else
						printf("%d/%d\n", zi, mu);
				}
			} else {
				if (mu == 1) {
					printf("-%d\n", zi);
				} else {

					if (zi > mu)
						printf("-%d+%d/%d\n", zi / mu + 1, mu * (zi / mu + 1) - zi, mu);
					else
						printf("-%d/%d\n", zi, mu);
				}

			}
		}
	}
	return 0;
}