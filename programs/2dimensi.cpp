#include<stdio.h>
int main()
{
int i,j;
int a[3][3]={
				{2,1,1},
				{1,2,1},
				{1,1,2}
				};
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		printf("%d ",a[i][j]);
	}
   printf("\n");
}


return 0;
}