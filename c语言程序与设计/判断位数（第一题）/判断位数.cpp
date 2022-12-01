#include <stdio.h>
int main()
{
    int year,month;
    while(scanf("%d%d",&year,&month)!=EOF)
    {
        if(month<1||month>12||year<0)
        printf("-1\n");
    else if ((year%4==0&&year%100!=0)||year%400==0)
        switch (month)
        {
           case 4:case 6:case 9:case 11:
           {printf("30\n");
            break;}
           case 2:
           {printf("29\n");
            break;}
           default:
           {printf("31\n");
            break;}
        }
    else
        switch (month)
        {
          case 4:case 6:case 9:case 11:
          {printf("30\n");
           break;}
          case 2:
          {printf("28\n");
           break;}
          default: 
          {printf("31\n");
           break;}
        }
    }
}