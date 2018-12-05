#include<stdio.h>
int main()
{
int i,j;
int a[3][3],b[3][3],c[3][3];

printf("Enter a matrix : \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
	{
	printf("a[%d][%d] = ",i,j);
	scanf("%d",&a[i][j]);
	}
}

printf("Enter b matrix : \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
	{
	printf("b[%d][%d] = ",i,j);
	scanf("%d",&b[i][j]);
	}
}


printf("Addion of a and b matrix is :\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);
	}
	printf("\n");
}



return 0;
}