#include<stdio.h>
int main()
{
int m,n,i,sum,k;
 printf("enter the value of k where k is the length of your number : ");
 scanf("%d",&k);
printf("enter the value of n : ");
scanf("%d",&n);
sum=0;
for (i=0;i<k;i++)
{


	 m=n%10;
	 sum=sum+m;
	 n=n/10;
}
printf("%d",sum);
return 0;
}
