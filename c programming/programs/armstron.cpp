#include<stdio.h>
int main()
{
int m,n,i,sum;
printf("enter the value of n : ");
scanf("%d",&n);
sum=0;
for (i=0;i<3;i++)
{
	 m=n%10;
	 sum=sum+m;
	 n=n/10;
}
printf("%d",sum);
return 0;
}
