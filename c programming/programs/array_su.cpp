#include<stdio.h>
int main()
{
int sum,i,a[5];

printf("Enter ur value : ");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

sum=0;
for(i=0;i<=4;i++)
{
	 sum=sum+a[i];
}

printf("sum=%d",sum);

return 0;
}
