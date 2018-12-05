				#include<stdio.h>
				int main()
				{
				int a,b,m,c;
				printf("Please enter the value of a & b : ");
				scanf("%d %d",&a,&b);

				printf("enter the vlue of m=1 to add and 2 to minus :  ");
				scanf("%d",&m);

				if (m==1)
				{
				c=a+b;

				printf("add %d+%d=%d",a,b,c);
				}
				else if(m==2)
				{
				 c=a-b;
				  printf("Minus %d-%d=%d",a,b,c);
				 }
				 return 0;
				}