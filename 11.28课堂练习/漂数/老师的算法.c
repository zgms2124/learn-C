#include <stdio.h>

int main() {
	int i, i1, i2, i3, i4, a[5844], min, min1;
	a[1] = 1;
	i1 = i2 = i3 = i4 = 1;
	for (i = 2; i <= 5842; i++) {
		min = a[i1] * 2;
		if (a[i1] * 2 > a[i2] * 3 ) {
			min = a[i2] * 3;
		}
		min1 = a[i3] * 5;
		if (a[i3] * 5 > a[i4] * 7 ) {
			min1 = a[i4] * 7;
		}
		if (min1 < min)
			min = min1;


		a[i] = min;
		if (min == a[i1] * 2)
			i1++;
		if (min == a[i2] * 3)
			i2++;
		if (min == a[i3] * 5)
			i3++;
		if (min == a[i4] * 7)
			i4++;
	}

	int n;
	while (scanf("%d", &n) == 1 && n) {
		if (n % 10 == 1 && n % 100 != 11)
			printf("The %dst humble number is %d.\n", n, a[n]);
		else if (n % 10 == 2 && n % 100 != 12)
			printf("The %dnd humble number is %d.\n", n, a[n]);
		else if (n % 10 == 3 && n % 100 != 13)
			printf("The %drd humble number is %d.\n", n, a[n]);
		else
			printf("The %dth humble number is %d.\n", n, a[n]);
	}
	return 0;
}



//=================================================
//
//
//
//
//#include <stdio.h>
//int min(int a,int b)
//{
//	if(a<b)
//	return a;
//	else
//	return b;
//}
//
//int ps(int a,int b,int c,int d)
//{
//	int m=min(min(a,b),min(c,d));
//	return m;
//}
//
//int main()
//{
//	int a,b,c,d;
//	a=b=c=d=1;
//	int f[5843];
//	f[1]=1;
//	int i;
//	for(i=2;i<=5842;i++)
//	{
//		f[i]=ps(f[a]*2,f[b]*3,f[c]*5,f[d]*7);
//		if(f[i]==f[a]*2) a++;
//		if(f[i]==f[b]*3) b++;
//		if(f[i]==f[c]*5) c++;
//		if(f[i]==f[d]*7) d++;
//	}
//	int n;
//	while(scanf("%d",&n)!=EOF){
//	if(n!=0)
//	{
//		if(n%10==1&&n%100!=11)
//		  printf("The %dst humble number is %d.\n",n,f[n]);
//		else if(n%10==2&&n%100!=12)
//		  printf("The %dnd humble number is %d.\n",n,f[n]);
//		else if(n%10==3&&n%100!=13)
//		  printf("The %drd humble number is %d.\n",n,f[n]);
//		else
//		  printf("The %dth humble number is %d.\n",n,f[n]);
//	}}
//
//	return 0;
//}
