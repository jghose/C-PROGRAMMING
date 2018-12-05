#include<stdio.h>
int main()
{
int i,roll[5];

printf("Enter ur value : ");

for(i=0;i<=4;i++)
{
scanf("%d",&roll[i]);
}


for(i=0;i<=4;i++)
{
	 printf("\nroll %d=%d",i,roll[i]);
}



return 0;
}
