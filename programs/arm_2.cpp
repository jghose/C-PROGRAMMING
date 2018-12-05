#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
char ch[10];
int l,m,n,i,sum,input;
printf("enter the value of n : ");
scanf("%d",&n);

sprintf(ch,"%d",n);
l=strlen(ch);

input=n;
sum=0;
for (i=0;i<l;i++)
{
	 m=n%10;
	 sum=sum+pow(m,l);
	 n=n/10;
}
if(input==sum)
{
	printf("It's an armstrong number");
}
else
{
	printf("It's not an armstron number");
}
return 0;
}
