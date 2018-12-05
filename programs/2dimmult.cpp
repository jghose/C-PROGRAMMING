//array two dimensional

#include<stdio.h>
#define row 3
#define col 3
int main()
{

	intr,k,i,j,a[row][col]={
									  {1,1,1},
									  {1,1,1},
									  {1,1,1},
									 };
	int b[row][col]=        {
									  {1,1,1},
									  {1,1,1},
									  {1,1,1}
	                         };
	int c[row][col];


 //.........Calculate...........
	for(k=0;k<row;k++)
	 {
		for(i=0;i<row;i++)
		{
         r=0;
			for(j=0;j<col;j++)
			{
				r+=a[i][j]*b[j][k];
			}
			c[i][k]=r;
		}
	 }

 //..................printing the result..............

	for(i=0;i<row;i++)
	 {
	for(j=0;j<col;j++)
		{
		printf("%d ",c[i][j]) ;
		}
	printf("\n");
	 }




return 0;
}
