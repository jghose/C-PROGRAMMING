#include<stdio.h>
int main()
{
int i,roll[5],marks[5];

printf("Enter ur value : ");

for(i=0;i<=4;i++)
{
scanf("%d %d",&roll[i],&marks[i]);
}


for(i=0;i<=4;i++)
{
	 printf("\n%d : %d",roll[i],marks[i]);
}



return 0;
}
